#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    int marks;
};

void main()
{
    struct student s1;
    struct student *p=&s1;
    strcpy(p->name , "hammy");
    p ->age = 11;
    p -> marks = 98.7;
    printf("  %d  ", p->age);
    printf("  %d   ", p->marks);
    printf(" %s  ", p->name);
}