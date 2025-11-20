#include<stdio.h>
void main()
{
    int arr[2][3] = {  {3,4,7} , {2,9,6}  } ;
    for(int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}    