#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a new node at the end of the list
void insertAtEnd(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to insert a new node at a specific position in the list
void insertAtPosition(struct Node** head, int newData, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;

    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
    } else {
        struct Node* current = *head;
        for (int i = 0; i < position - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;

    // Input linked list from user
    printf("Enter the number of nodes in the linked list: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }

    // Print the original linked list
    printf("Original linked list: ");
    printList(head);

    // Insert at beginning
    printf("Enter data to insert at the beginning: ");
    scanf("%d", &data);
    insertAtBeginning(&head, data);
    printf("Linked list after inserting at the beginning: ");
    printList(head);

    // Insert at end
    printf("Enter data to insert at the end: ");
    scanf("%d", &data);
    insertAtEnd(&head, data);
    printf("Linked list after inserting at the end: ");
    printList(head);

    // Insert at position
    int position;
    printf("Enter position to insert data: ");
    scanf("%d", &position);
    printf("Enter data to insert at position %d: ", position);
    scanf("%d", &data);
    insertAtPosition(&head, data, position);
    printf("Linked list after inserting at position %d: ", position);
    printList(head);

    return 0;
}