#include<stdio.h>
 int main(){
    int i,j,n,a[50],temp;
    printf("Enter number of elements u want: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        printf("%d, ",a[i]);
    }
    printf("\nApplying insertion sorting\n");
    for (i=1;i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
      a[j+1]=temp;  
    }
    for (i=0;i<n;i++){
        printf("%d, ",a[i]);
    }
    return 0;
 }