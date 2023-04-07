#include<stdio.h>
void printsort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insertionsort(int *arr,int n)
{
    int key,j;
    // LOOP for passes
    for(int i=1;i<=n-1;i++)
    {
        key=arr[i];
        j=i-1;
        // loop for each pass
        while(j>=0 && arr[j] > key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    
}
int main(){
    int arr[]={3,76,45,67,1,87};
    int n=6;
    printsort(arr,n);
    insertionsort(arr,n);
    printsort(arr,n);
    return 0;
}