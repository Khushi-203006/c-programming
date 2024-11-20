#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

int create(int n);
int traverse(int n);
int start(int n);
int end(int n);
int pos(int n);
int delstart(int n);
int delend(int n);
int delpos(int n);

int main(){
    int n;
    printf("Enter number of node:- ");
    scanf("%d",&n);
    create(n);
    printf("\nInsertion or deletion:- \n");
    printf("1--> Begnning\n2--> End\n3--> At given position\n4--> Begnning\n5--> End\n6--> At given position\n");
    int choose;
    printf("Enter choice:- ");
    scanf("%d",&choose);
    switch(choose){
        case(1):
            start(n);
            traverse(n);
            break;
        case(2):
            end(n);
            traverse(n);
            break;
        case(3):
            pos(n);
            traverse(n);
            break;
        case(4):
            delstart(n);
            traverse(n);
            break;
        case(5):
            delend(n);
            traverse(n);
            break;
        case(6):
            delpos(n);
            traverse(n);
            break;
        default:
            printf("Incorrect Choice\n");
    }
    return 0;
}

int create(int n){
    struct node *newnode,*temp;
    head=(struct node *)malloc(sizeof(struct node));
    int data,i;
    printf("Enter data:- ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
    for(i=2;i<=n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data:- ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    }
    printf("Created list succesfully");
}

int traverse(int n){
    printf("Data of linked list:- \n");
    struct node *newnode;
    newnode=head;
    while(newnode!=NULL){
        printf("%d-->%d\n",newnode->data,newnode->next);
        newnode=newnode->next;
    }
}

int start(int n){
    struct node *temp,*newnode;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted:- ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

int end(int n){
    struct node *temp,*newnode;
    int data;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted:- ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

int pos(int n){
    struct node *temp,*newnode;
    int data,p,i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data to be inserted and position:- ");
    scanf("%d%d",&newnode->data,&p);
    newnode->next=NULL;
    temp=head;
    while(i<p){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

int delstart(int n){
    struct node *temp,*newnode;
    newnode=head;
    head=newnode->next;
    free(newnode);
}

int delend(int n){
    struct node *temp,*newnode;
    newnode=head;
    temp=head;
    while(newnode->next!=NULL){
        temp=newnode;
        newnode=newnode->next;
    }
    temp->next=NULL;
    free(newnode);
}

int delpos(int n){
    struct node *temp,*newnode;
    newnode=head;
    int p,i=1;
    printf("Enter position=");
    scanf("%d",&p);
    while(i<p-1){
        newnode=newnode->next;
        i++;
    }
    temp=newnode->next;
    newnode->next=temp->next;
    free(temp);
}