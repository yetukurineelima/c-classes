//c program to print integer data types.
#include<stdio.h>
int main()
{
    //integer value with positive data.
    int a=10;
    //integer value with negative data.
    int b=-15;
    //U or u is used for unsigned int in c.
    int c=89U;
    //L or l is used for long int in c.
    long int d=99998L;
    printf("integer value with positive data:%d\n",a);
    printf("integer value with negative data:%d\n",b);
    printf("integer value with an unsigned int data:%u\n",c);
    printf("integer value with an long int data:%ld",d);
    return 0;
}