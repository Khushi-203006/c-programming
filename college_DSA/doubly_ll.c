#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in a doubly linked list
struct Node {
    int data;
    struct Node *Prev; // Pointer to the previous node
    struct Node *Next; // Pointer to the next node
};

// Function to create and populate a doubly linked list
void createList(struct Node* head, struct Node* tail, int n) {
    int data;

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);

        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }

        newNode->data = data;
        newNode->Prev = NULL;
        newNode->Next = NULL;

        if (head == NULL) {
            // First node
            head = newNode;
            tail = newNode;
        } else {
            // Add new node to the end of the list
            (tail)->Next = newNode;
            newNode->Prev = tail;
            tail = newNode;
        }
    }
}

// Function to traverse the list and print data, Prev, and Next addresses
void traverse(struct Node* head) {
    printf("The list is:\n");
    struct Node* temp = head;

    while (temp != NULL) {
        printf("%p --> %d --> %p\n", (void*)temp->Prev, temp->data, (void*)temp->Next);
        temp = temp->Next;
    }
}

int main() {
    struct Node *head = NULL, *tail = NULL;
    int n;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create the list
    createList(head, tail, n);

    // Traverse the list
    traverse(head);

    return 0;
}
