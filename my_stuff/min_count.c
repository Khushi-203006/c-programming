#include<stdio.h>
int main(){
    int t;
    printf("Enter test case:- ");
    scanf("%d",&t);
    while(t--){
        int n;
        printf("Enter lenght:- ");
        scanf("%d",&n);
        int arra[n];
        for(int i=0;i<n;i++){
            printf("enter element: ");
            scanf("%d",&arra[i]);
        }
        printf("\n");
        for(int i=0;i<n;i++){
            printf("%d ",arra[i]);
        }
        printf("\n");
        int min=arra[0];
        for(int i=0;i<n;i++){
            if(min>arra[i]){
                min=arra[i];
            }
        }
        int operation=0;
        for(int i=0;i<n;i++){
            if(min<arra[i]){
                operation++;
            }
        }
        printf("\ncount of min value: %d",operation);
        printf("\n");
    }
    return 0;
}