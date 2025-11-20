#include<stdio.h>
#include<string.h>
void main()
{
    //create
    char name[8] = "AMULYA";
    char new [100]= "Hello";
    //access
    printf("%c\n",name[5]);
    // length
    printf("length of string is %d\n",strlen(name)); 
    //concatenation
    strcat(new,name); // new= Hello + AMULYA
    printf("%s\n",new);
    // search for a char in string!
    printf("%d",strstr(new,"how")); //null
}