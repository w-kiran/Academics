#include <stdio.h>
// using of typedef
struct student
{
    char name[50];
    int age;
};

int main()
{
    struct student s1;
    printf("Enter the name of student: ");
    scanf("%s %d", s1.name,& s1.age);

    printf("Name=%s, Age=%d", s1.name, s1.age);
}