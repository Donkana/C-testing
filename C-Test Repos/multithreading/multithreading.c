#include <stdio.h>
#include <stdlib.h>
#include "threading_utils.h"

// Function to calculate the sum of elements in an array (can be replaced with other tasks)
void* calculate_sum(void* arg) {
  int* arr = (int*)arg;
  int size = sizeof(arr) / sizeof(arr[0]);
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return (void*)sum;
}

int main() {
  int num_threads = 4;   // Number of threads to use
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; // Array for calculation
  int size = sizeof(arr) / sizeof(arr[0]);

  // Allocate memory for the thread arguments dynamically
  ThreadArgs* thread_args = (ThreadArgs*)malloc(num_threads * sizeof(ThreadArgs));
  if (thread_args == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
  }

  // Create and manage threads
  pthread_t threads[num_threads];
  int total_sum = 0;
  for (int i = 0; i < num_threads; i++) {
    thread_args[i].start_routine = calculate_sum;
    thread_args[i].arg = arr + (i * size / num_threads); // Divide array based on thread count

    int create_status = create_thread(&threads[i], &thread_args[i]);
    if (create_status != 0) {
      printf("Error creating thread %d: %d\n", i, create_status);
      exit(1);
    }
  }

  // Join threads to wait for completion
  for (int i = 0; i < num_threads; i++) {
    int join_status = join_thread(threads[i]);
    if (join_status != 0) {
      printf("Error joining thread %d: %d\n", i, join_status);
      exit(1);
    }
    int partial_sum = *(int*)pthread_join_result(threads[i]); // Get return value from joined thread
    total_sum += partial_sum;
  }

  printf("Total sum of the array: %d\n", total_sum);

  // Free allocated memory
  free(thread_args);

  return 0;
}

// Implementations for create_thread and join_thread in threading_utils.c (not shown here)
