#include<stdio.h>

int main(){
    int max,min,arra[50],n,i;
    printf("Enter lenght:- ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter element:- ");
        scanf("%D",&arra[i]);
    }
    max=arra[0];
    min=arra[0];
    for(i=1;i<n;i++){
        if (arra[i]>max){
            max=arra[i];
        }
        if (arra[i]<min){
            min=arra[i];
        }
    }
    printf("Maximum number is %d.",max);
    printf("\nMinimum number is %d.",min);
    return 0;
}