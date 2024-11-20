#include <stdio.h>

int main() {
	int t;
    printf("enter test cases: ");
	scanf("%d",&t);
	while(t--){
	        int n;
            printf("enter lenght: ");
	        scanf("%d",&n);
	        int arra[n];
	        for(int i=0;i<n;i++){
                printf("Enter element: ");
	            scanf("%d",&arra[i]);}
	        int max=arra[0];
	        for(int i=1;i<n;i++){
	            if (max<arra[i]){
	                max = arra[i];
	            }
	        }
	        printf("max element= %d\n", max);
	}

return 0;}