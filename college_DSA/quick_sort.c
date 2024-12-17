#include<stdio.h>

int sort(int *arr,int start,int end){
    int pivot=arr[start];
    int left=start;
    int right=end;
    while(left<right){
        while(arr[left]<=pivot){
            left++;
        }
        while(arr[right]>pivot){
            right--;
        }
        if(left<right){
            int temp = arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
        }
    }
    int temp = arr[start];
    arr[start] = arr[right];
    arr[right]=temp;
    return right;
}



void quicksort(int *arr,int start,int end){
    if(start<end){
        int mid = sort(arr,start,end);
        quicksort(arr,start,mid-1);
        quicksort(arr,mid+1,end);
    }
}


int main(){
    int n;
    printf("Enter lenght:- ");
    scanf("%d",&n);
    int arr[n];
    printf("enter element:- ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    quicksort(arr,0,n-1);
    printf("Sorted array\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}