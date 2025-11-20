#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p = (int *)malloc(4*sizeof(int));
    p[0]=350;
    p[1]=56;
    p[2]=99;
    p[3]=120;
    printf("%d  %d  %d  %d",p[0],p[1],p[2],p[3]);
    free(p);
}