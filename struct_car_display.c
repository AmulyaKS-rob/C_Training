//create a structure with the 3 variables name of the car , maximum speed , price . store these in array of structures and display them.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    float speed;
    int price;  
};

void main()
{
    struct car c;
    strcpy(c.name , "BMW");
    c.speed=950;
    c.price=70000000;
    
    printf(" %f  ", c.speed);
    printf(" %d  ", c.price);
    printf("   %s   ", c.name);
}
