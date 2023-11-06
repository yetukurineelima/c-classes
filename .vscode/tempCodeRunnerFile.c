//c program to calculate area of circle.
#include<stdio.h>
#define PI 3.141
int main()
{
    float radius,area;
    printf("enter radius of circle\n");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("area of circle:6.4f\n",area);
    return 0;
}