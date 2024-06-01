/*Program to sort numbers stored in an array using bubble sort in descending order.*/
#include<stdio.h>

void main()
{
    int arr[10] = {123,456,89,23,4,978,324,378,344,56},temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10 ; j++)
        {
            if (arr[j] >  arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }

    printf("Array after sorting:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
}