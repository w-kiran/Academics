#include <stdio.h>

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 3

// Structure to represent student information
struct Student
{
    char name[50];
    int rollNumber;
    int marks[NUM_SUBJECTS];
    float averageMarks;
};

// Function to calculate the average marks for a student
void calculateAverage(struct Student *student)
{
    int sum = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        sum += student->marks[i];
    }
    student->averageMarks = (float)sum / NUM_SUBJECTS;
}

// Function to sort the students based on average marks in descending order
void sortStudents(struct Student students[])
{
    for (int i = 0; i < NUM_STUDENTS - 1; i++)
    {
        for (int j = 0; j < NUM_STUDENTS - i - 1; j++)
        {
            if (students[j].averageMarks < students[j + 1].averageMarks)
            {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main()
{
    struct Student students[NUM_STUDENTS];

    // Input student details
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks in three subjects:\n");
        for (int j = 0; j < NUM_SUBJECTS; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
        calculateAverage(&students[i]);
        printf("\n");
    }

    // Calculate class average
    float classAverage = 0.0;
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        classAverage += students[i].averageMarks;
    }
    classAverage /= NUM_STUDENTS;

    // Sort students based on average marks
    sortStudents(students);

    // Display average marks for each student
    printf("Average marks for each student:\n");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Student %d - Name: %s, Roll Number: %d, Average Marks: %.2f\n", i + 1, students[i].name, students[i].rollNumber, students[i].averageMarks);
    }

    // Display overall class average
    printf("\nOverall Class Average: %.2f\n", classAverage);

    // Display top three students
    printf("\nTop Three Students:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, students[i].name);
    }

    return 0;
}
