#include<stdio.h>
int main(){
    int arra1[50],arra2[50],i,j,n,leader;
    printf("Enter lenght:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element:- ");
        scanf("%d",&arra1[i]);
    }

    leader=arra1[n-1];
    for(i=n-1;i>=0;i--){
        if(arra1[i]>leader){
            printf("%d ",arra1[i]);
            leader=arra1[i];
        }
    }
    return 0;
}