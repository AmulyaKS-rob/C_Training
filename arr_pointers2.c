#include <stdio.h>
void main()
{
    int arr[5]={87,90,66,45,91};
    int *p = arr;
    printf("%d",*(p+1));
}