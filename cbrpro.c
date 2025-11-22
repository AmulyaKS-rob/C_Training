// write a number we should multiply 3 numbers and call by reference
#include<stdio.h>
void pro(int *a , int *b , int *c)
{
    int product = (*a) * (*b) * (*c);
    printf(" %d ",product);
}
void main()
{
    int a=5;
    int b=2;
    int c=9;
    printf("call by reference : \n");
    pro(&a,&b,&c); 
}   
