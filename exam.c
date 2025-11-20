#include<stdio.h>
void marks(int m1,int m2, int m3)
{
  if(m1>=40 && m2>=40 && m3>=40)
  {
    printf("passed!");
  }
   else
  { 
     printf("FAILED!");
  }
  float avg=(float)(m1+m2+m3)/3;
  printf("average is %f",avg);
}
void main()
{
    int m1,m2,m3;
    printf("enter m1,m2,m3");
    scanf("%d%d%d",&m1,&m2,&m3);
    marks(m1,m2,m3);
}
