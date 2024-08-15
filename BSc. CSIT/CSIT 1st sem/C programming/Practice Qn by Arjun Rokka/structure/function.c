#include <stdio.h>
// making a structure
typedef struct function
{
    char name[39];
    int id;
    float salary;
} fun;
// declaring a function
void display(fun);

// main
int main()
{

    fun s1;
    printf("Enter the name,id and salary of employee: ");
    scanf("%s %d %f", s1.name, &s1.id, &s1.salary);

    display(s1);
}

// defining a function
void display(fun s1)
{
    printf("Name=%s, Age=%d, Salary=%.2f", s1.name, s1.id, s1.salary);
}