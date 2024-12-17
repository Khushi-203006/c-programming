#include<stdio.h>
#define n 5
int queue[n];
int front=-1;
int rear=-1;
void enqueue(){
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%n == front){
        printf("Queue is full");
    }
    else{
        rear= (rear+1)%n;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("queue is empyt");
    }
    else if(front==rear){
        printf("%d is dequeued",queue[front]);
        front=rear=-1;
    }
    else{
        printf("%d is dequeued",queue[front]);
        front = (front+1)%n;
    }
}

void peek(){
    if(front==-1 && rear==-1){
        printf("queue is empyt");
    }
    else{
        printf("%d is peek element",queue[front]);
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("queue is empyt");
    }
    int i=front;
    while(i!=rear){
        printf("%d---> %d\n",queue[i],i);
        i=(i+1)%n;
    }
    printf("%d---> %d\n",queue[rear],rear);
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