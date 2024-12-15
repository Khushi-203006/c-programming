#include<stdio.h>

void merge_array(int *arr, int low, int mid, int high){
    int left=low;
    int right=mid+1;
    int temp[high-low+1];
    int k=0;

    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp[k]=arr[left];
            k++;
            left++;
        }
        else{
            temp[k]=arr[right];
            k++;
            right++;
        }
    }
    while(left<=mid){
            temp[k]=arr[left];
            k++;
            left++;
    }
    while(right<=high){
            temp[k]=arr[right];
            k++;
            right++;
    }
    for(int i=0;i<k;i++){
        arr[low+i]=temp[i];
    }

}
    

void merge_sort(int *arr , int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge_array(arr,low,mid,high);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}