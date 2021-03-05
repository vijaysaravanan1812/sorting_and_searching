
//insertion sort


#include<stdio.h>
#include"lib.c"
int insertion_sort(int size,int *arr)
{
    int value,hole;
    for (int i = 1; i < size; i++)
    {
        value = arr[i];
        hole = i;
        while ( arr[hole - 1] > value && hole > 0 )
        {
            arr[hole] = arr[hole -1];
            hole--;
        }
        arr[hole] = value;
    }
    return 0;
    
}
int main()
{
    int arr[]={91,86,74,33,5,46,32,26,81,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Given array is \n");
    print_array(arr,size);
    printf("After sorting \n");
    insertion_sort( size,  arr);
    print_array(arr,size);
    
    
    return 0;
}






