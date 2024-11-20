#include<stdio.h>
int main(){
    int n ,arra[50],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d ",arra[i]);
    }
    printf("\n");
    for(i=n-1;i>=0;i--){
        printf("%d ",arra[i]);
    }
    return 0;
}