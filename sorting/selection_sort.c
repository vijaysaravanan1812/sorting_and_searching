//selection sort 

#include<stdio.h>
#include"lib.c"

void selection_sort(int size, int *array)
{
    int imin;
    for (int i = 0; i <= size -1; i++)
    {
        int temp,imin = i;

        //picking uo minimum element index
        for (int j = i + 1; j <= size -1; j++)
        {
            if (array[j] < array[imin])
            {
                imin = j;
            }
        }
        temp = array[imin];
        array[imin] = array[i];
        array[i] = temp; 
        
    }
    


}


int main()
{
    int arr[]={9,8,7,42,5,4,3,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Given array is \n");
    print_array(arr,size);
    printf("After sorting \n");
    selection_sort( size,  arr);
    print_array(arr,size);

    
    return 0;

}