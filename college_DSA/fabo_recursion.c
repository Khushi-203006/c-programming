#include<stdio.h>

int fabo(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return fabo(n-1)+fabo(n-2);
    }
}

int main(){
    int n,i;
    printf("Enter number= ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("%d ",fabo(i));
    }
    return 0;
}