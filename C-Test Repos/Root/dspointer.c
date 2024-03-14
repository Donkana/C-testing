#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

int main() {
  struct Node *head = (struct Node*)malloc(sizeof(struct Node)); // Allocate memory for head node
  head->data = 10;
  head->next = NULL;

  struct Node *node2 = (struct Node*)malloc(sizeof(struct Node)); // Allocate memory for another node
  node2->data = 20;
  node2->next = NULL;

  head->next = node2; // Link the nodes together

  FILE *fp = fopen("linked_list.bin", "wb");

  if (fp == NULL) {
    perror("Error opening file");
    exit(1);
  }

  // Write the data of each node (assuming no cycles in the linked list)
  struct Node *current = head;
  while (current != NULL) {
    fwrite(current, sizeof(struct Node), 1, fp);
    current = current->next;
  }

  // Remember to free the allocated memory after writing
  free(head);
  free(node2);

  fclose(fp);
  return 0;
}
