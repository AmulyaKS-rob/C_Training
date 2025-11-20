#include<stdio.h>
void main()
{
    int pin=9001;
    int u_pin;
    printf("enter your pin");
    scanf("%d",&u_pin);
    if(u_pin==pin)
    {
        printf("pin is correct ");
    }                             
    else
    {
        printf("incorrect pin");
    }                                                                                                  
}