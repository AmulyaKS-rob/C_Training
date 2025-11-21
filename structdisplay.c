#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book 
{
    char name[100];
    char author[100];
    int year;
};

void main()
{
    struct book b1;
    strcpy(b1.name , "The_Kindness");
    strcpy(b1.author , "Jackson");
    b1.year=1995;

    struct book b2;
    strcpy(b2.name , "Ghost");
    strcpy(b2.author , "william");
    b2.year=1798;

    struct book b3;
    strcpy(b3.name , "Happiness");
    strcpy (b3.author ,  "Holly" );
    b3.year=1990;

    printf("%s\n",b1.name);
    printf("%s\n",b2.author);
    printf("%d\n",b3.year);
   
}