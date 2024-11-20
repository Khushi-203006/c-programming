#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *pre;
    struct node *next;
}*head;

void create(int n){
    struct node *newnode, *temp;
    int data, i;
    head = (struct node*)malloc(sizeof(struct node));

    printf("node 1:- ");
    scanf("%d",&data);

    head->data = data;
    head->next = NULL;
    head->pre = NULL;

    temp=head;
    for(i=2;i<=n;i++){
        newnode= (struct node *)malloc (sizeof(struct node));
    }

    printf("data at node %d= ",i);
    scanf("%d",&data);

    newnode -> data =data;
    newnode -> next = NULL;
    newnode -> pre = ;
}

int main(){
    printf("Enter no of node: ");
    create();

    printf("linked list");
    traverse();
    return 0;
}