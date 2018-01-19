// Recursive C program for insertion sort
#include<stdio.h>

void recursive_insertion_sort(int arr[], int size)
{
    if(size == 1)
        return;
    recursive_insertion_sort(arr, size-1);
    //Here key will be the last element in each array
    int key = arr[size-1];
    int j = size-2;
    while(j>=0 && (arr[j]>key))
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    recursive_insertion_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d\n", arr[i]);
    }
}
