#include<stdio.h>
int main(){
    int a[3][3],i,j,n;
    printf("Enter element:- ");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);}
            printf("\n");}
    int sum=0;
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum+= a[i][j];
            }
        }}
        printf("\nSum = %d",sum);
        return 0;
}