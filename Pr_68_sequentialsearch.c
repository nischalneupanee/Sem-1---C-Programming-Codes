/* Program to search an element in array using sequential search.*/

#include<stdio.h>

void main()
{
    int arr[10]={45,67,12,87,123,98,345,9871,234,876},num;
    printf("Enter the number you want to search:");
    scanf("%d",&num);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]== num)
        {
            printf("The number %d is found on %d index",arr[i],i);
            break;
        }
        else if( i == 9)
        {
            printf("Number not in the list.");
        }
        
    }
    

}