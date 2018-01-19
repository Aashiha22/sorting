//implementation of insertion sort
#include<stdio.h>

void insertion_sort(int arr[], int size)
{
    for(int i=1;i<size;i++)
    {
        int j = i-1, key = arr[i];
        while((arr[j] > key) && (j>=0))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key; 
    }
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d\n", arr[i]);
    }
}
