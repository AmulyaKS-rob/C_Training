#include<stdio.h>
void main()
{
    int age;
    int height;
    printf("enter the age");
    scanf("%d",&age);
    printf("enter the height");
    scanf("%f",&height);
    if((age>12) && (height>4.5))
    {
        printf("you can ride the roller coaster");
    }
    else
    {
        printf("grow up and come back");
    }
}