/*Write macros to compute area and circumference of circle and make a program to use this macro.*/
#include<stdio.h>
#define PI 3.14159265359
#define AREA(radius) (PI*(radius)*(radius))
#define CICUMFERENCE(radius) (2*PI*(radius))

void main()
{
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    double area = AREA(radius);
    double circumference = CICUMFERENCE(radius);

    printf("The area of the circle: %.2lf\n",area);
    printf("The circurmference of the circle: %.2lf\n",circumference);
}