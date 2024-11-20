#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node * start;

int create(int n);
int traverse(int n);

int main(){
    int n;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    create(n);
    printf("Data in linked list:-\n");
    traverse(n);
    return 0;
}

int create(int n){
    struct node *newnode, *temp;
    start=(struct node *)malloc(sizeof(struct node));
    int data,i;
    printf("Enter node 1 data:- ");
    scanf("%d",&data);
    start->data=data;
    start->next=NULL;
    temp=start;
    for(i=2;i<=n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter node %d data:- ",i);
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
    printf("\nLinkedlist created sucessfully\n");
}

int traverse(int n){
    struct node *newnode;
    newnode=start;
    for(int i=1;i<=n;i++){
        printf("%d-->%d\n", newnode->data,newnode->next);
        newnode=newnode->next;
    }
    
}
