#include <stdio.h>

int main() {
	int n,arra[50],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&arra[i]);
	}
	for(i=0;i<n-1;i++){
	    if(arra[i]<arra[i+1]){
	        printf("%d ",arra[i+1]);
	    }
	}
	printf("%d",arra[n-1]);
	return 0;
}

