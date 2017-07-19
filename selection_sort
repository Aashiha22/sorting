//Selection sort O(n2)
//Used where memory write should be limited spave complexity O(n)
//Not much useful

class selectionsort
{
    public static int[] selectionsort(int[] arr)
    {
        for(int i=0;i<arr.length;i++)
        {
            //Find the min element
            int min = arr[i], min_index=i;
            for(int j=i+1;j<arr.length;j++)
            {
                if(arr[j] < min)
                {
                    min = arr[j];
                    min_index = j;
                }
            }
            //swap first element with min element
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
        return arr;
    }
    public static void main(String args[])
    {
        int[] arr = {3,2,1,9,6,5,0};
        arr = selectionsort(arr);
        for(int i=0;i<arr.length;i++)
        {
            System.out.println(arr[i]);
        }
    }
}
