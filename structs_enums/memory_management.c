#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

typedef struct {
  int data;
  struct Node* next; // Pointer to the next node in the linked list
} Node;

void print_linked_list(Node* head) {
  while (head != NULL) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("NULL\n");
}

int main() {
  // Dynamic memory allocation for a linked list node
  Node* head = (Node*)malloc(sizeof(Node));
  head->data = 10;
  head->next = NULL;

  // Add another node to the linked list
  Node* second = (Node*)malloc(sizeof(Node));
  second->data = 20;
  second->next = NULL;
  head->next = second;

  printf("Linked list: ");
  print_linked_list(head);

  // Free the allocated memory to prevent memory leaks
  free(head);
  free(second);

  return 0;
}
