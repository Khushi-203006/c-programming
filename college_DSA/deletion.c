#include<stdio.h>
int main(){
    int arra[100],n,i,pos=-1,num;
    printf("Enter lenght:- ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter element:- ");
        scanf("%d",&arra[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",arra[i]);
    }

    printf("\nEnter number:- ");
    scanf("%d",&num);
    
    for (i=0;i<n;i++){
        if (arra[i]==num){
            pos=i;
            break;
        }
    }
    printf("\n");
    if (pos!=-1){
        for (i=pos;i<n-1;i++){
        arra[i]=arra[i+1];}
        n--;
    }
    else{
            printf("Not found");
        }
    for(i=0;i<n;i++){
        printf("%d ",arra[i]);
    }
    return 0;
}