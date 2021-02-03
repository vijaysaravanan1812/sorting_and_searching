#include<stdio.h>

//TO print array
int print_array(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);
    }printf("\n");
    return 0;
}


    //Function to partition the array
    int part(int *arr,int l,int r)
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
  

    //Function to sort the array  
    void sort(int *arr,int l, int r)
    {
        if (l < r)
        {
            int pindex = part(arr,l,r);  
            sort(arr,l,pindex-1);
            sort(arr,pindex + 1,r);
        }
    }

