/***** Demonstration of Logical operators (&&, //, !) (gives only logical decisions either 0 or 1) ****/
#include <stdio.h>
#include <conio.h>
int main()
{
	int a=13, b=12;
	printf(" a<b && b>a : %d\n", a<b && b>a); // AND Operator
	printf(" a>b // b<a : %d\n", a>b || b<a); // OR Operator
	printf(" !(a<14): %d\n", !(a<14));
	
	
	
	
	return 0;
}
