#include <stdio.h>
void printsort(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void merge(int *arr, int lb, int mid, int ub)
{
    int i = lb;
    int b[20];
    int j = mid + 1;
    int k = lb;
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
    k++;

    }

    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        arr[k]=b[k];
    }
}
void mergesort(int *arr, int lb, int ub)
{
    int mid;
    if (lb < ub){
        mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main()
{
    int arr[] = {4, 3, 6, 1, 8, 7};
    int n = 6;
    int lb = 0;     
    int ub = n - 1;
    printsort(arr, n);
    mergesort(arr, lb, ub);
    printsort(arr, n);
    return 0;
}