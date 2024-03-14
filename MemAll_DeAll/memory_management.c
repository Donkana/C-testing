#include <stdio.h>
#include <stdlib.h>

// Structure for a dynamically allocated linked list node
typedef struct Node {
  int data;
  struct Node* next;
} Node;

// Function to create a new node (advanced: takes initial data)
Node* create_node(int data) {
  Node* new_node = (Node*)malloc(sizeof(Node));
  if (new_node == NULL) {
    printf("Memory allocation failed!\n");
    exit(1); // Terminate program on allocation failure
  }
  new_node->data = data;
  new_node->next = NULL;
  return new_node;
}

// Function to insert a node at the beginning of the linked list
void insert_at_beginning(Node** head_ref, int data) {
  Node* new_node = create_node(data);
  new_node->next = *head_ref;
  *head_ref = new_node;
}

void print_linked_list(Node* head) {
  while (head != NULL) {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("NULL\n");
}

int main() {
  Node* head = NULL; // Initially empty list

  // Insert elements at the beginning
  insert_at_beginning(&head, 50);
  insert_at_beginning(&head, 30);
  insert_at_beginning(&head, 10);

  printf("Linked list: ");
  print_linked_list(head);

  // Free allocated memory to prevent leaks (advanced: iterate and free)
  Node* current = head;
  while (current != NULL) {
    Node* temp = current->next;
    free(current);
    current = temp;
  }
  head = NULL; // Set head to NULL after deallocation

  printf("Memory freed.\n");

  return 0;
}
