#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};

void main()
{
    struct student s1  ;
    strcpy(s1.name , "Anther");
    s1.age=17;
    s1.marks=98.7;

    struct student s2;
    strcpy(s2.name , "Popoye");
    s2.age=18;
    s2.marks=79.56;

    struct student s3 = {"Joey", 21 , 59.6};

    printf(" %s  " , s2.name);
    printf("  %f ", s1.marks);
}    