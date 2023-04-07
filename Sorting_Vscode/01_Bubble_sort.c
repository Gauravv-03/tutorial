#include<stdio.h>
void printsort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void BubbleSort(int *a,int n)
{
    int temp;
    for(int i=0;i< n-1;i++)
    {
        for(int j=0; j<n-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main(){
    int A[]={2,1,4,5,9,45};
    int n=6;
    printsort(A,n);
    BubbleSort(A,n);
    printf("\n");
    printsort(A,n);

    return 0;
}