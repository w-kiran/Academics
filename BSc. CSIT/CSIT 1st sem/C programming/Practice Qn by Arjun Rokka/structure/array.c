#include <stdio.h>
struct student
{
    char name[50];
    float mark;
    int number;
};

int main()
{
    struct student std[100];
    int i, n;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter %d student's name, mark and number: ", i);

        scanf("%s %f %d", std[i].name, &std[i].mark, &std[i].number);
    }

    printf("student's name\t mark\tnumber:\n ");
    for (i = 1; i <= n; i++)
    {
        printf("%s\t\t %.2f\t %d\n", std[i].name, std[i].mark, std[i].number);
    }
}
