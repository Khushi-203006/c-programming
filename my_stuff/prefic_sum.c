#include <stdio.h>

int main() {
    int arra[50],i,sum=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    for(i=0;i<n;i++){
        sum+=arra[i];
        printf("%d ",sum);
    }
    return 0;
}