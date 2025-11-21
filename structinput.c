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
    int n;
    printf("enter the number of book ");
    scanf("%d",&n);
    struct book b[n];
    for (int i=0 ; i<n ; i++)
    {
    printf("enter the name of the book :");
    scanf("%s",b[i].name);

    printf("enter author of the  book : ");
    scanf("%s",b[i].author);

    printf("enter the year of publication: ");
    scanf("%d",&b[i].year);
    }
}