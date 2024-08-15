// Documentation
/*
Author: Arjun Rokka
Date: 2080/02/24
Purpose: Describe the difference between passing arguments by value and passing arguments by address with suitable program.
*/

// Preprocessor Directive
#include <stdio.h>

// Global Declaration
void value(int);
void reference(int *);
int val, ref;
// Main function
int main()
{
    val = 5;
    printf("Before Function calling: %d\n\n\n", val);
    value(val);
    printf("After increment Value number: %d\n", val);

    reference(&val);
    printf("After increment reference number: %d\n", val);
}

// User Define function
void value(int va)
{
    va++;
    printf("Inside Value number: %d\n", va);
}

void reference(int *fe)
{
    (*fe)++;
    printf("Inside Refrence number: %d\n", *fe);
}
