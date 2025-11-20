// write a c function which will accepts an array , its size as n and returns the difference between thje first and last element
#include<stdio.h>
#include<stdlib.h>
int difference(int arr[], int n)
{
    int sub=arr[0]-arr[n-1];
     return abs(sub);
}
void main()
{
    int n=5;
    int arr[5]={90,89,78,50,80};
    printf("%d",difference(arr,n));
}     