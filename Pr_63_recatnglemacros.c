/*Write a program to calculate area and perimeter of a rectangle using macros.*/
#include<stdio.h>
#define AREA(length, breadth) ((length) * (breadth))
#define PERIMETER(length, breadth) (2*((length) + (breadth)))

void main()
{
    int length,breadth;
    printf("Enter the length and breadth:");
    scanf("%d %d",&length,&breadth);
    int area = AREA(length,breadth);
    printf("Area of the rectangle: %d\n",area);
    int perimeter = PERIMETER(length,breadth);
    printf("Perimeter of the rectangle: %d",perimeter);
}