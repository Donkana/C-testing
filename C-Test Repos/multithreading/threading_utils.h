#ifndef THREADING_UTILS_H_
#define THREADING_UTILS_H_

#include <pthread.h>

// Structure to store thread arguments
typedef struct ThreadArgs {
  void* (*start_routine)(void*); // Function pointer for the thread
  void* arg;                       // Argument to pass to the thread
} ThreadArgs;

// Function to create a thread with error handling
int create_thread(pthread_t* thread, const ThreadArgs* args);

// Function to join a thread with error handling
int join_thread(pthread_t thread);

#endif  // THREADING_UTILS_H_
