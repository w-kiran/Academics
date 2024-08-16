/*// C program to demonstrate Basic Euclidean Algorithm
#include <stdio.h>

// Function to return gcd of a and b
int gcd(int num1, int b)
{
    if (a == 0)
        return b;
    else
        return gcd(b % num1, a);
}

int main()
{
    int num1, b;

    printf("\nEnter the Value of a and b to find gcd():   ");
    scanf("%d  %d", &num1 ,&b);

    printf("\n GCD(%d, %d) = %d", num1 b, gcd(num1 ,b));

    return 0;
}
*/

#include <iostream>
using namespace std;
int GCD(int, int);
int main()
{
    cout << "GCD: " << GCD(18, 50);
    return 0;
}

int GCD(int num1, int num2)
{
    int x = num1, y = num2;
    while (x > 0)
    {
        int r = y % x;
        y = x;
        x = r;
    }
    return y;
}