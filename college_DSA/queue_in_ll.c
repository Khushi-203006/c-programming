#include<stdio.h>
#include<stdlib.h>
struct queue{
    int data;
    struct queue *next;
};
struct queue *front=NULL;
struct queue *rear=NULL;

void enqueue(){
    int x;
    printf("Enter element:- ");
    scanf("%d",&x);
    struct queue *newnode;
    newnode = (struct queue*) malloc(sizeof(struct queue));
    newnode->data = x;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear = newnode;
    }
}

void display(){
    struct queue *temp;
    if(front == NULL && rear==NULL){
        printf("queue is empty");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}
void dequeue(){
    struct queue *temp;
    temp=front;
    if(front == NULL &&rear==NULL){
        printf("Queue is empty");
    }
    else{
        printf("%d is dequeued",front->data);
        front = front->next;
        free(temp);
    }
}
void peek(){
    if(front == NULL &&rear==NULL){
        printf("Queue is empty");
    }
    else{
        printf("%d is peek element",front->data);
    }
}

int main(){
    int ch;
    printf("\nMenu\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
    do{
        printf("\nEnter choice:- ");
        scanf("%d",&ch);
        switch(ch){
            case(1):
            enqueue();
            break;
            case(2):
            dequeue();
            break;
            case(3):
            peek();
            break;
            case(4):
            display();
            break;
            case(5):
            printf("Exiting...");
            break;
            default:
            printf("Invalid choice");
        }
    }
    while(ch!=5);
    return 0;
}