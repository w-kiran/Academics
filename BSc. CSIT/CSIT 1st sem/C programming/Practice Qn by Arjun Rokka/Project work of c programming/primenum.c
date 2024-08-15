// #include <stdio.h>

// int main() {
//     int num, i, flag = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     for (i = 2; i <= num / 2; ++i) {
//         if (num % i == 0) {
//             flag = 1;
//             break;
//         }
//     }
//     if (num == 1) {
//         printf("1 is not a prime number\n");
//     }
//     else {
//         if (flag == 0)
//             printf("%d is a prime number\n", num);
//         else
//             printf("%d is not a prime number\n", num);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 17, count = 0;
//     int i;
//     for (i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             count = count + 1;
//         }
//     }

//     if (count == 2)
//     {
//         printf("It is a prime no.");
//     }
//     else
//     {
//         printf("It is not a prime no.");
//     }
// }