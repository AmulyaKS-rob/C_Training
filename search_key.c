#include <stdio.h>
int search ( int arr[] , int key , int n )
{
    for (int i=0;i<n; i++)
    {
        if (arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{
    int key=350;
    int n=5;
    int arr[5]={45,33,41,89,35};
    printf("%d",search(arr , key , n));
}