/*Twenty-five numbers are entered through the keyboard into an array; write a program find
out how many of them are even and how many of them are odd.*/
#include<stdio.h>

void main()
{
    int arr[25],even=0,odd=0;
    for (int i = 0; i < 25; i++)
    {
        printf("arr[%d] =",i);
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }

    printf("Even = %d and Odd = %d",even,odd);
    
}