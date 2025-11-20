#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p = (int*)calloc(4,sizeof(int));
    p[0] = 95;
    p[1] = 87;
    p[2]=78;
    p[3]=55;
    printf(" %d %d %d %d " , p[0] , p[1] , p[2] , p[3]) ;
    free(p);
}