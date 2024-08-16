// C program to demonstrate working of extended  Euclidean Algorithm

#include <iostream>
using namespace std;
int gcdExtended(int a, int b, int *x, int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    // Update x and y using results of recursive  call
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

int main()
{
    int a, b, x = 1, y = 1;

    cout << "\nEnter the Value of a and b to find gcd():";
    cin >> a >> b;

    int g = gcdExtended(a, b, &x, &y);

    printf("\n\n    GCD(%d, %d) = %d", a, b, g);

    printf("\n\n  The Extended Euclidean Algorithm is :   ");
    printf("  %d = %d * %d + %d * %d ", g, x, a, y, b);

    return 0;
}

/*#include <iostream>
using namespace std;
int ExtendedGCD(int a, int b)
{
    int S0 = 1, S1 = 0, T0 = 0, T1 = 1, Q, R, S, T;
    while (b > 0)
    {
        Q = a / b;
        R = a % b;
        S = S0 - Q * S1;
        T = T0 - Q * T1;
        // exchanging
        a = b;
        b = R;
        S0 = S1;
        S1 = S;
        T0 = T1;
        T1 = T;
    }
    return (a, S0, T0);
}

int main()
{
    cout << "GCD: " << ExtendedGCD(20, 10);
    return 0;
}*/

/*
#include <stdio.h>

// Function to implement the Extended Euclidean Algorithm
int extendedEuclidean(int a, int b, int *x, int *y) {
    // Base case
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1; // To store results of recursive call
    int gcd = extendedEuclidean(b % a, a, &x1, &y1);

    // Update x and y using results of recursive call
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x, y;
    int gcd = extendedEuclidean(a, b, &x, &y);

    printf("GCD of %d and %d is %d\n", a, b, gcd);
    printf("Linear combination: %d * %d + %d * %d = %d\n", a, x, b, y, gcd);

    return 0;
}
*/

// #include <iostream>
// using namespace std;
// int extendedGCD(int a, int b, int &x, int &y)
// {
//     if (b == 0)
//     {
//         x = 1;
//         y = 0;
//         return a;
//     }

//     int x1, y1;
//     int gcd = extendedGCD(b, a % b, x1, y1);

//     x = y1;
//     y = x1 - (a / b) * y1;

//     return gcd;
// }

// int main()
// {
//     int a, b;
//     int x, y;
//     cout << "\nEnter the value of a and b to find gcd(): ";
//     cin >> a >> b;

//     int gcd = extendedGCD(a, b, x, y);
//     std::cout << "GCD(" << a << ", " << b << ") = " << gcd << std::endl;
//     std::cout << "Coefficients x and y: " << x << ", " << y << std::endl;

//     return 0;
// }
