#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Structure to store arguments for the thread function (advanced: data sharing)
typedef struct {
  int start;
  int end;
  int* arr;
  int sum;
} ThreadArgs;

// Function to calculate the sum of elements in a sub-array (advanced: data sharing)
void* calculate_partial_sum(void* arg) {
  ThreadArgs* args = (ThreadArgs*)arg;
  for (int i = args->start; i <= args->end; i++) {
    args->sum += args->arr[i];
  }
  return NULL;
}

int main() {
  int num_threads = 4; // Number of threads to use (advanced: configurable)
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; // Array for calculation
  int size = sizeof(arr) / sizeof(arr[0]);
  int chunk_size = size / num_threads; // Calculate chunk size for each thread

  // Allocate memory for thread arguments (advanced: dynamic allocation)
  ThreadArgs* thread_args = (ThreadArgs*)malloc(num_threads * sizeof(ThreadArgs));
  if (thread_args == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
  }

  // Create and manage threads (advanced: error handling)
  pthread_t threads[num_threads];
  int total_sum = 0;
  for (int i = 0; i < num_threads; i++) {
    int start = i * chunk_size;
    int end = (i == num_threads - 1) ? size - 1 : start + chunk_size - 1; // Adjust for last thread
    thread_args[i].start = start;
    thread_args[i].end = end;
    thread_args[i].arr = arr;
    thread_args[i].sum = 0;

    int create_status = pthread_create(&threads[i], NULL, calculate_partial_sum, &thread_args[i]);
    if (create_status != 0) {
      printf("Error creating thread: %d\n", create_status);
      exit(1);
    }
  }

  // Join threads to wait for completion (advanced: synchronization)
  for (int i = 0; i < num_threads; i++) {
    int join_status = pthread_join(threads[i], NULL);
    if (join_status != 0) {
      printf("Error joining thread: %d\n", join_status);
      exit(1);
    }
    total_sum += thread_args[i].sum; // Add partial sums to get the total
  }

  printf("Total sum of the array: %d\n", total_sum);

  // Free allocated memory (advanced: memory management)
  free(thread_args);

  return 0;
}
