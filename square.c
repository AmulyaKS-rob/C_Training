// write a function which will accept 2 input parameters x,y and returns x^2+y^2
#include<stdio.h>
int square(x,y)
{
    int sqr=x*x+y*y;
    return sqr;
}
void main()
{
    int x=9;
    int y=8;
    printf("%d", square(x,y));
}