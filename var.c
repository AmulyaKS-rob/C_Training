//write a c program with a function with the variadic arguments
#include<stdio.h>
#include<stdarg.h>
void display(int count,...)

{
    int result=0;
    va_list list;
    va_start (list,count);
    for(int i=1;i<=count;i++)
    {
        int n=va_arg(list,int);
        result=result+n;
        
    }
    va_end (list);
    printf("  %d  " , result);
}
void main()
{
    display(5 , 99 , 890 , 456, 897 , 789);
}