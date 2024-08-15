#include <stdio.h>
struct arrayfunction
{
    char name[50];
    int age;
};

// defining and declaring
void display(struct arrayfunction s)
{
    printf("Name=%s, Age=%d \n", s.name, s.age);
}

int main()
{
    struct arrayfunction s[10];

    int i, n;
    printf("Enter the number of student: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter name and age %d: ", i);
        scanf("%s %d", s[i].name, &s[i].age);
    }

    // calling
    for (i = 1; i <= n; i++)
    {
        display(s[i]);
    }
}
