 #include<stdio.h>
void printsort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void selection(int *arr,int n)
{
    int key,temp;
    int minindex;
    
    for(int i=0;i<n;i++)
    {
    int minindex=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[minindex])
            {
             minindex=j;
            }
         
        }
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;

    }
}
int main(){
    int arr[]={4,3,6,1,8,7};
    int n=6;
    printsort(arr,n);
    selection(arr,n);
    printsort(arr,n);



    return 0;
}