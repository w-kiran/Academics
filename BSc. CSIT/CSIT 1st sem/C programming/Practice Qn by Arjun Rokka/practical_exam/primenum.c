// #include <stdio.h>
// int isprime(int n)
// {
//     int i;
//     for (i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {
//     int num, i;
//     int count = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Comp | Prime\n");
//     for (i = 2; i <= num; i++)
//     {
//         if (isprime(i))
//         {
//             printf("%d\t", i);
//             count++;
//         }
//     }
//     printf("\n\nTotal number of Prime: %d\n\n\n\n", count);
// }

#include <stdio.h>
int main()
{
    //    calculating prime number using do while loop
    int i, num = 1;
    do
    {
        i = 2;
        while (i <= num)
        {
            if (num % i == 0)
            {
                break;
            }
            i++;
        }
        if (i == num)
            printf("%d ", num);
        num++;
    } while (num <= 100);
    return 0;
}
