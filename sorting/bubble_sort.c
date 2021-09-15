//bubble sort

#include<stdio.h>
#include"lib.c"

void bubble_sort(int size , int *array)
{
    int temp;
    for (int pass = 1; pass <= size -1 ; pass++)
    {
        for (int i = 0; i <= size - 2; i++)
        {
            if (array[i + 1] <= array[i])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
            
        }
        
    }
    
}


int main()
{
     int arr[]={91,81,17,16,51,41,13,21,11,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Given array is \n");
    print_array(arr,size);
    printf("After sorting \n");
    bubble_sort( size,  arr);
    print_array(arr,size);

    
    return 0;

}