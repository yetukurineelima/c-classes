//c program to calculate area of circle.
#include<stdio.h>
#define PI 3.14
float area(float r);
int main()
{
    float r;
    printf("\n enter the radius");
    scanf("%f",&r);
    printf("\n area of circle:%f",area(r));
}
float area(float r)
{
    return(PI*r*r);
}
    