/*#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

int main()
{
    struct student s1;
    printf("Enter the name of student: ");
    scanf("%s %d", s1.name, &s1.age);

    printf("Name=%s, Age=%d", s1.name, s1.age);
}
*/

// using of typedef
#include <stdio.h>
typedef struct simple
{
    char address[59];
    int class;
}sim;

int main()
{
    sim s1;
    printf("Enter the name of student: ");
    scanf("%s %d", s1.address, &s1.class);

    printf("Name=%s, Age=%d", s1.address, s1.class);
}