#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p = (float *)calloc(2,sizeof(float) );
    p[0]=500.89;
    p[1]=8.7;
    p[2]=99.76;
    p[3]=567.23;
    printf(" %f %f %f %f", p[0] , p[1] , p[2] , p[3]);
    free(p);
}