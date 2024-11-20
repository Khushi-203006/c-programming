#include<stdio.h>

int main(){
    int arr[3][3],i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element:- ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j || i+j==2){
                sum+=arr[i][j];
            }
        }
    }
   

    printf("SUM = %d",sum);
    return 0;

}