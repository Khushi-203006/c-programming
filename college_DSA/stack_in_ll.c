#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;
void push(){
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    struct stack*newnode;
    newnode=(struct stack*) malloc(sizeof(struct stack));
    if(newnode==NULL){
        printf("unable to allocate ");
    }
    newnode->data = x;
    newnode->next = top;
    top=newnode;    
}
void display(){
    struct stack *temp;
    temp = top;
    if(top==NULL){
        printf("List is empty");
    }
    else{
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}
void peek(){
    if(top==NULL){
        printf("List is empty");
    }
    else{
        printf("Top element is %d",top->data);
    }
}
void pop(){
    struct stack *temp;
    temp=top;
    if(top==NULL){
        printf("List is empty");
    }
    else{
        printf("element popped is %d",top->data);
        top=top->next;
        free(temp);
    }
}

int main(){
    int ch,x;
    printf("\nMenu");
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Peek");
    printf("\n4.Dsiplay");
    printf("\n5.Exit\n");
    do{
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case(1):
            push();
            break;
            case(2):
            pop();
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
