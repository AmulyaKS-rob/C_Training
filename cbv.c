#include<stdio.h>
struct score
{
    float marks;
    int rank;
};

void edit (struct score s1)
{
    printf("Before change in function: %f\n" , s1.marks);
    s1.marks = 48.5;
    printf("After change in function : %f\n",s1.marks);

}
void main()
{
    struct score s1={ 89.6 , 4};
    edit(s1);
    printf("After change in main %f\n", s1.marks);
}