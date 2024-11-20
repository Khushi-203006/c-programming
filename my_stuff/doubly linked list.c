#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to create a doubly linked list
struct Node* createDoublyLinkedList(int n) {
    struct Node *head = NULL, *temp = NULL, *newNode;
    int data, i;

    // Creating the list by iterating n times
    for (i = 1; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);
        newNode = createNode(data);

        if (head == NULL) {
            head = newNode; // First node becomes the head
        } else {
            temp->next = newNode;
            newNode->prev = temp;
        }
        temp = newNode;
    }
    return head;
}

// Function to display the doubly linked list
void displayDoublyLinkedList(struct Node* head) {
    struct Node* temp = head;
    printf("Doubly Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n;
    struct Node* head = NULL;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    head = createDoublyLinkedList(n);
    displayDoublyLinkedList(head);

    return 0;
}