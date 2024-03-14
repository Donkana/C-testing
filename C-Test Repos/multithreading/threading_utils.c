#include <stdio.h>
#include <pthread.h>
#include "threading_utils.h"

int create_thread(pthread_t* thread, const ThreadArgs* args) {
  int create_status = pthread_create(thread, NULL, args->start_routine, args->arg);
  if (create_status != 0) {
    perror("pthread_create failed");
  }
  return create_status;
}

int join_thread(pthread_t thread
