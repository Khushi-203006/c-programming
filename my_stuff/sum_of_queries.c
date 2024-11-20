#include<stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    int arra[n];
    for(i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arra[i]);
    }
    int k;
    scanf("\n%d",&k);
    int q1[50][2],q2[50][2];
    for(i=0;i<k;i++){
        scanf("%d%d",&q1[i][0],&q2[i][1]);
    }
    for(i=0;i<k;i++){
            printf("%d %d",q1[i][0],q2[i][1]);
            printf("\n");
    }
    int prefix_sum[n+1];
    prefix_sum[0]=0;
    for(i=0;i<k;i++){
        prefix_sum[i+1]=prefix_sum[i]+arra[i];
    }

    for(i=0;i<n;i++){
        printf("%d",prefix_sum[i]);
    }

    for(i=0;i<k;i++){
        int a=q1[i][0];
        int b=q2[i][1];
        int sum= prefix_sum[b]-prefix_sum[a-1];
        printf("%d\n",sum);
    }

return 0;
}