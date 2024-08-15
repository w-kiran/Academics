/*
Write a C program that uses a switch statement to check the grade of a student based on
their score. Use the following grading scale: A (90-100), B (80-89), C (70-79), D (60-69), F (0-
59). Print a message to the console indicating the grade.*/

// #include <stdio.h>
// int main()
// {
//     int score;
//     printf("Enter a score of a student : ");
//     scanf("%d", &score);
//     switch (score)
//     {
//     case 90:
//         printf("Your grade is A");
//         break;
//     case 80:
//         printf("Your grade is B");
//         break;
//     case 70:
//         printf("Your grade is C");
//         break;
//     case 60:
//         printf("Your grade is D");
//         break;
//     case 50:
//         printf("Your grade is E");
//         break;

//     default:
//         printf("You are failed !");
//         break;
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int score;

    printf("Enter the student's score: ");
    scanf("%d", &score);

    switch (score / 10)
    {
    case 10:
    case 9:
        printf("Grade: A\n");
        break;
    case 8:
        printf("Grade: B\n");
        break;
    case 7:
        printf("Grade: C\n");
        break;
    case 6:
        printf("Grade: D\n");
        break;
    default:
        printf("Grade: F\n");
        break;
    }

    return 0;
}
