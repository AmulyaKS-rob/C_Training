// write a c program which adds 3 numbers by call by reference
#include<stdio.h>
void add( int *a , int *b , int *c)
{
    int add=(*a) + (*b) + (*c);
    printf("  %d  ",add);
}
void main()
{
    int a=8;
    int b=2;
    int c=3;
    printf("call by reference :\n");
    add(&a,&b,&c);

}
