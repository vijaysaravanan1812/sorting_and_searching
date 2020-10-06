
//insertion sort


#include<stdio.h>
#include"lib.c"
int insertion_sort(int size,int arr[])
{
    int temp,left_element;
    for (int pass = 1; pass < size; pass++)
    {
        left_element = pass - 1;
        temp = arr[pass];
        while (arr[left_element] > temp && left_element >=0)
        {
            arr[left_element + 1] = arr[left_element];
            left_element--;
        }
        arr[left_element+1] = temp;
    }
    
    return 0;
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Given array is \n");
    print_array(arr,size);
    printf("After sorting \n");
    insertion_sort( size,  arr);
    print_array(arr,size);

    
    return 0;
}






