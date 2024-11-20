#include <stdio.h>

int main() {
	int t,i;
	printf("How many time u want to run loop:- ");
	scanf("%d",&t);
	while(t!=0){
	    int n,k,count=0,arr[50];
		printf("\nNumber of sweets and calorie:- ");
	    scanf("%d%d",&n,&k);
	    for(i=0;i<n;i++){
	        scanf("%d",&arr[i]);
	    }
		printf("\nARRAY- ");
	    for(i=0;i<n;i++){
	        printf("%d",arr[i]);
	    }
	    for(i=0;i<n;i++){
			int sum=0;
	        sum+=arr[i];
	        if(sum>k){
	            break;
	        }
			count+=1;
	    }
		printf("\nNumber of sweets can be eatean:- ");
	    printf("%d",count);
	    t--;
	}
	return 0;
}
