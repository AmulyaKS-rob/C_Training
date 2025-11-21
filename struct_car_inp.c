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
     int n;
    printf("enter the number of car");
    scanf("%d",&n);
    struct car c[n];
    for( int i=0 ; i<n ; i++)
    {
        printf("enter the name of the car");
        scanf("%s",c[i].name);

        printf("enter the maximum speed of the car");
        scanf("%f",&c[i].speed);

        printf("enter the price of the car");
        scanf("%d",&c[i].price);
    }
}
