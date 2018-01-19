//Implementation of merge sort
#include<stdio.h>

void merge(int arr[], int left, int right, int mid)
{
    int n1 = mid-left+1;
    int n2 = right-mid;
    int L[n1], R[n2];
    int i=0, j=0, k=0;
    for(i=0;i<n1;i++)
    {
        L[i] = arr[i+left];
    }
    for(i=0;i<n2;i++)
    {
        R[i] = arr[i+mid+1];
    }
    i=0;
    j=0;
    k=left;
    while(i<n1 && j<n2)
    {
        if(L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k++] = L[i++];
    }
    while(j<n2)
    {
        arr[k++] = R[j++];
    }
}

void merge_sort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = left+(right-left)/2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, right, mid);
    }
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0, size-1);
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 1;
}
