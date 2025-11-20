// write a c function which will accepts three parameters l,b,h and returns volume of the cube
#include <stdio.h>
int volume(int l, int b, int h)
{
    int vol=l*b*h;
    return vol;
}
void main()
{
    int l=5;
    int b=9;
    int h=4;
    printf("%d\n",volume(l,b,h));
}