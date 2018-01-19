//Recursive implementation of bubble sort
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void recursive_bubble_sort(int arr[], int size)
{
    if(size == 1)
        return;
    for(int i=0; i<size-1; i++)
    {
        if(arr[i] > arr[i+1])
            swap(&arr[i], &arr[i+1]);
    }
    recursive_bubble_sort(arr, size-1);
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    recursive_bubble_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d\n", arr[i]);
    }
}
