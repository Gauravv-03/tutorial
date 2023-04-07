#include<stdio.h>
int binarysearch(int arr[],int n,int key)
{
    int mid;
    int l=0;
    int r=n-1;
    while(l<r){
    mid=(l+r)/2;
    if(key==arr[mid])
    {
        return mid;
    }
    else if(key<arr[mid])
    {
        r=mid-1;
    }
    else{
        l=mid+1;
    }
    }
    return -1;
}
int main(){
    int arr[]={2,5,6,7,8,9,12,15,55,78};
    int n=10;
    int l;
    l=binarysearch(arr,n,55);
    printf("insdexx %d\n",l);
    return 0;
}