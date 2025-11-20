#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p = (int *)malloc(3*sizeof(int));
    p[0]= 45;
    p[1]=78;
    p[2]=81;
    
    //increase size to 5 integers
    p=(int*)realloc(p,5*sizeof(int));
    p[3]=765;
    p[4]=89;

    for(int i=0;i<5 ;i++)
    {
        printf("  %d  ",p[i]);
    }
    free(p);
}