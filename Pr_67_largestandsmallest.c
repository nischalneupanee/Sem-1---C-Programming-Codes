/*Write a program to display largest and smallest number among 10 numbers stored in an
array*/

#include<stdio.h>

void main()
{
    int arr[10]= { 4356,2675,45,2321,567,231,567,123,6587,387}, large = arr[0] , small = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>large)
        {
            large = arr[i];
        }

        else if(arr[i]<small)
        {
            small = arr[i];
        }
        else{
            continue;
        }
    }

    printf("The largest is %d and smallest is %d",large,small);
    
}