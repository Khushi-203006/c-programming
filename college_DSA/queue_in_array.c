#include<stdio.h>
#define n 10
int queue[n];
int front=-1;
int rear=-1;

void enqueue(){
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(rear==n-1){
        printf("Overflow\n");
    }
    else if(rear==-1 && front==-1){
        front = rear = 0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(){
    if(front==-1 && rear==-1){
        printf("underflow\n");
    }
    else if(front==rear){
        printf("Element dequeued is %d\n",queue[front]);
        front=rear=-1;
    }
    else{
        printf("Element dequeued is %d\n",queue[front]);
        front++;
    }
}
void peek(){
    if(front==-1 && rear==-1){
        printf("underflow\n");
    }
    else{
        printf("Front element is %d",queue[front]);
    }
}
void display(){
    int i;
    if(front==-1 && rear==-1){
        printf("underflow\n");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d-->%d\n",queue[i],i);
        }
    }
}
int main(){
    int ch;
    printf("\nMenu\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n");
    do{
        printf("Enter choice: ");
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
            printf("invalid choice");
        }
    }
    while(ch!=5);
    return 0;
}