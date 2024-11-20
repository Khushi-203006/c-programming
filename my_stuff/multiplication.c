#include<stdio.h>
int main(){
    int arr1[50][50],arr2[50][50],arr3[50][50],i,j,k,n,m,sum=0;
    printf("Enter rows and columns: ");
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("Enter element: ");
            scanf("%d",&arr1[i][j]);
        }}
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d ",arr1[i][j]);
    }
    printf("\n");
}
for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("Enter element: ");
            scanf("%d",&arr2[i][j]);
        }}
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("%d ",arr2[i][j]);
}
printf("\n");}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        int sum=0;
        for(k=0;k<m;k++){
            sum=sum + arr1[i][k]*arr2[k][j];
        }
    arr3[i][j]=sum;
    }
}
printf("\n Multiplied matrix\n");
for (i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d ",arr3[i][j]);
    }
    printf("\n");
}
return 0;
}