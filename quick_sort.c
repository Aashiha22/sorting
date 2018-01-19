//Implementation of quick sort
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left-1;
    for(int j=left;j<right;j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[right], &arr[i+1]);
    return (i+1);
}

void quick_sort(int arr[], int left, int right)
{
    if(left < right)
    {
        int pi = partition(arr, left, right);
        quick_sort(arr, left, pi-1);
        quick_sort(arr, pi+1, right);
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, size-1);
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
