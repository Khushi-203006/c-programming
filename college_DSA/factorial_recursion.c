#include<stdio.h>

int fact(int n){
    if(n>1){
        return n * fact(n-1);
    }
}

int main(){
    int n,f;
    printf("Enter number= ");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %d.",n,f);
    return 0;
}