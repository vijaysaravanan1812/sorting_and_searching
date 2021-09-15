//Quick sort
#include<stdio.h>
#include"lib.c"


//Function to partition the array
int partition(int *arr,int l,int r)
{
    int pivot = arr[r];
    int pindex = l;int temp;
    for (int i = l; i < r; i++)
    {
        if (arr[i] <= pivot)
        {
            temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex = pindex + 1;
        }
    }
    temp = arr[pindex]; 
    arr[pindex] = arr[r];
    arr[r] = temp;
    return pindex;
    

}
  
void quicksort(int *arr,int l, int r)
{
    if (l < r)
    {
        int pindex = partition(arr,l,r);  
        quicksort(arr,l,pindex-1);
        quicksort(arr,pindex + 1,r);
    }
    
}

int main()
{
    //int arr[] = {40,54,12, 34, 27, 23, 83, 42, 57, 22, 69, 24, 43, 16};
     int arr[] = {1,3,5,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int l = 0,r = size -1;

    printf("given array is\n");
    print_array(arr,size);
    printf("After quick sort\n");
    quicksort(arr,0,size - 1);
    print_array(arr,size);

    exit();
    return 0;
    
}

