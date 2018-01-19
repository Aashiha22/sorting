//optimized implementation of bubble sort
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int size)
{
    int flag = 0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)      //OPTIMIZATION
            break;
    }
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        printf("%d\n", arr[i]);
    }
}
