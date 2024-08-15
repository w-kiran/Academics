
/*Nested loop using of function*/
// problem is that in college ( students details , teacher details , college head department<government)
#include <stdio.h>

struct student
{
    char name_of_student[50];
    int roll_no;
    float gpa;
};

struct teacher
{
    char name_of_teacher[50];
    int id;
    float salary;
};

struct clz_department // child of govern structure
{
    char name_of_clz;
    int registration;
    float earning;
};

struct govern
{
    struct clz_department dep;
};

// Function declaring
void studentDetail(struct student std[], int stno);
struct teacher teacherDetail();

// main
int main()
{
    struct govern gov;
    struct student std[10];
    struct teacher tec;

    // Taking input

    // student
    int stno, tecno;
    printf("Enter the number of Students: ");
    scanf("%d", &stno);

    int i;
    for (i = 1; i <= stno; i++)
    {
        printf("\nEnter Name of student %d : ", i);
        scanf("%s", std[i].name_of_student);
        printf("Enter Roll no of student %d : ", i);
        scanf("%d", &std[i].roll_no);
        printf("Enter GPA of student %d : ", i);
        scanf("%f", &std[i].gpa);
    }

    // calling a function
    studentDetail(std, stno);
    tec = teacherDetail();
    printf("\nName\tID\tSalary\n");
    printf("%s\t%d\t%.f\n", tec.name_of_teacher, tec.id, tec.salary);

    // govern struct
    printf("Enter the name of the college: ");
    scanf("%s", gov.dep.name_of_clz);
    printf("Enter the registration no. of the college: ");
    scanf("%d", gov.dep.registration);
    printf("Enter the earnign of the college: ");
    scanf("%d", gov.dep.earning);
    // output
    printf("Name of collage\tRegistration no.\tEearning");
    printf("%s\t%d\t%.3f", gov.dep.name_of_clz, gov.dep.registration, gov.dep.earning);
}

// Function defining
void studentDetail(struct student std[], int stno)
{
    int i;
    printf("\nName\tRoll No.\tGPA\n");
    for (i = 1; i <= stno; i++)
    {
        printf("%s\t%d\t%.f\n", std[i].name_of_student, std[i].roll_no, std[i].gpa);
    }
}

struct teacher teacherDetail()
{
    struct teacher tec;

    int i, tecno = 2;
    // printf("Enter the number of Teachers: ");
    // scanf("%d", &tecno);

    printf("\nEnter Name of Teacher :");
    scanf("%s", tec.name_of_teacher);
    printf("Enter ID no of Teacher : ");
    scanf("%d", &tec.id);
    printf("Enter Salary of Teacher : ");
    scanf("%f", &tec.salary);

    return tec;
}