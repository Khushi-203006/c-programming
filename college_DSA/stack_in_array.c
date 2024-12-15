#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void push(){
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(top==n-1){
        printf("Overflow");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
  int item;
  if(top==-1){
    printf("underflow");
  }  
  else{
    item = stack[top];
    top--;
  }
  printf("Poped item is %d",item);
}
void peek(){
    if(top==-1){
    printf("underflow");
  } 
  else{
    printf("Top element of stack is %d",stack[top]);
  }
}
void display(){
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

int main(){
    int ch;
    do{
        printf("\nMenu\n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        printf("Enter choice:- ");
        scanf("%d",&ch);
        switch (ch)
        {
        case (1):
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
            printf("Default choice");
            break;
        }
    }
    while(ch!=5);
    return 0;
}
