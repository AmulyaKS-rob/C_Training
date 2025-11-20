#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p=(float*)malloc(3*sizeof(float));
    p[0]=98.67;
    p[1]=76.99;
    p[2]=1000.5;
    p[3]=678.11;
    printf(" %f %f %f %f ",p[0] , p[1] , p[2] , p[3] );
    free(p);
}
