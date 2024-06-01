/*Program to read n numbers in an array and display their sum and average.*/
#include<stdio.h>

void main()
{
    int n;
    printf("Enter the number of numbers:");
    scanf("%d",&n);

    int arr[n],sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of numbers is %d\n",sum);
    printf("Average of number is %d",sum/n);

}