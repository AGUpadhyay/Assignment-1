//WAP to find the area of the circle.Take radius from user as input and print the result.
#include<stdio.h>
int main()
{
    int r;
    float a,pi=3.14;
    printf("Enter the value of radius");
    scanf("%d",&r);
    a=pi*r*r;
    printf("Area of circle is %f having the radius %d",a,r);
    return 0;
}
