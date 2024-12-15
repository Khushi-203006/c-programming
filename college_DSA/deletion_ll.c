#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void insertAtEnd(struct Node** head, int data);
void displayList(struct Node* head);
void deleteAtBeginning(struct Node** head);
void deleteAtEnd(struct Node** head);
void deleteAtPosition(struct Node** head, int position);

int main() {
    struct Node* head = NULL;  // Initialize the linked list
    int choice, data, position;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at End\n");
        printf("2. Display List\n");
        printf("3. Delete from Beginning\n");
        printf("4. Delete from End\n");
        printf("5. Delete from Specific Position\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;

        case 2:
            displayList(head);
            break;

        case 3:
            deleteAtBeginning(&head);
            break;

        case 4:
            deleteAtEnd(&head);
            break;

        case 5:
            printf("Enter position to delete: ");
            scanf("%d", &position);
            deleteAtPosition(&head, position);
            break;

        case 6:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Node inserted.\n");
}

// Function to display the linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    struct Node* temp = head;
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to delete a node from the beginning
void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("Node deleted from the beginning.\n");
}

// Function to delete a node from the end
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;

    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
    } else {
        struct Node* prev = NULL;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
    printf("Node deleted from the end.\n");
}

// Function to delete a node from a specific position
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;

    if (position == 1) {
        *head = temp->next;
        free(temp);
        printf("Node deleted from position %d.\n", position);
        return;
    }

    struct Node* prev = NULL;
    int count = 1;

    while (temp != NULL && count < position) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position %d is out of range.\n", position);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node deleted from position %d.\n", position);
}
