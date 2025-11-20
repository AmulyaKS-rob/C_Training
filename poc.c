// write a c function which will accepts one input parameter or returns the perimeter of the circle declare pi as constant 
#include<stdio.h>
float perimeter(float r)
{
    const float pi= 3.14;
    float peri=2*pi*r;
    return peri;
}
void main()
{
    int r=8;
    printf("%f",perimeter(r));
}