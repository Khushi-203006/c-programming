#include<stdio.h>
int main(){
    int arra[10],n,i,pos,num;
    printf("Enter lenght:- ");
    scanf("%d",&n);
    if (n>=10){
        printf("Overflow");
        return 0;
    }
    for (i=0;i<n;i++){
        printf("Enter element:- ");
        scanf("%d",&arra[i]);
    }
    printf("Enter position and element:- ");
    scanf("%d%d",&pos,&num);
    for(i=n-1;i>=pos;i--){
        arra[i+1]=arra[i];
    }
    arra[pos]=num;
    for(i=0;i<=n;i++){
        printf("%d ",arra[i]);
    }
    return 0;
}