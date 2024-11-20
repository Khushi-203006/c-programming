#include<stdio.h>
int main(){
    int arra[50],sum=0,i,n;
    printf("Enter lenght:- ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Enter element:- ");
        scanf("%D",&arra[i]);
}
for(i=0;i<n;i++){
    sum+=arra[i];
}
printf("Sum= %d",sum);
return 0;
}