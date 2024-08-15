#include <stdio.h>
typedef struct student
{
    char name[50];
    int id;
    char grade[50];
} std;

int main()
{
    std s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the name, id and grade of a student %d: ", i + 1);
        scanf("%s %d %s", s[i].name, &s[i].id, s[i].grade);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nName of student = %s\nId number =%d\nGrade of student = %s\n\n", s[i].name, s[i].id, s[i].grade);
    }
}