// // Write a C program that uses nested if statements to check if a given integer is a multiple of 2, 3, or 5. Print a message to the console indicating the result.
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num % 2 == 0)
//     {
//         printf("Multiple of 2");
//     }
//     else if (num % 3 == 0)
//     {
//         printf("Multiple of 2");
//     }
//     else if ("Multiple of 5")
//     {
//         /* code */
//     }
//     else
//         printf("Not multiple of 2,3 or 5");
// }

#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        if (num % 3 == 0)
        {
            if (num % 5 == 0)
            {
                printf("%d is a multiple of 2, 3, and 5\n", num);
            }
            else
            {
                printf("%d is a multiple of 2 and 3\n", num);
            }
        }
        else if (num % 5 == 0)
        {
            printf("%d is a multiple of 2 and 5\n", num);
        }
        else
        {
            printf("%d is a multiple of 2\n", num);
        }
    }
    else if (num % 3 == 0)
    {
        if (num % 5 == 0)
        {
            printf("%d is a multiple of 3 and 5\n", num);
        }
        else
        {
            printf("%d is a multiple of 3\n", num);
        }
    }
    else if (num % 5 == 0)
    {
        printf("%d is a multiple of 5\n", num);
    }
    else
    {
        printf("%d is not a multiple of 2, 3, or 5\n", num);
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     if (num % 2 == 0)
//     {
//         printf("%d is a multiple of 2", num);
//         if (num % 3 == 0)
//         {
//             printf(" and 3");
//         }
//         if (num % 5 == 0)
//         {
//             printf(" and 5");
//         }
//         printf("\n");
//     }
//     else if (num % 3 == 0)
//     {
//         printf("%d is a multiple of 3", num);
//         if (num % 5 == 0)
//         {
//             printf(" and 5");
//         }
//         printf("\n");
//     }
//     else if (num % 5 == 0)
//     {
//         printf("%d is a multiple of 5\n", num);
//     }
//     else
//     {
//         printf("%d is not a multiple of 2, 3, or 5\n", num);
//     }

//     return 0;
// }
