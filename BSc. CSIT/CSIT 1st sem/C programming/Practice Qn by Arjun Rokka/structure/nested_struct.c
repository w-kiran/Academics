/*WAP using structure which defined complex number structure as the member of number structure */

#include <stdio.h>

// Child structure
typedef struct complex // while declaring 'struct structure_name'
{
    int integer;
    float floting;
} comp;

// parent structure
typedef struct number
{
    // defining complex structure
    comp imaginary;
    int num1;
    float num2;
} real;

// main
int main()
{
    real whole;
    whole.imaginary.integer = 5;
    whole.imaginary.floting = 5.12341254;
    whole.num1 = 50;
    whole.num2 = 23.2345;

    printf("\nFrom complex structure: %d", whole.imaginary.integer);
    printf("\nFrom complex structure: %.3f", whole.imaginary.floting);
    printf("\nFrom number structure: %d", whole.num1);
    printf("\nFrom number structure: %.3f", whole.num2);
}
