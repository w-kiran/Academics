// swap consecutive numbers
#include <stdio.h>
#include <conio.h>
int main()
{
	int A[12], i, tmp;
	printf("Enter 12 numbers: \n");
	for (i=0; i<12; i++)
	{
		scanf("%d", &A[i]);
	}
	for (i=0; i<12; i+=2)
	{
		tmp= A[i];
		A[i]= A[i+1];
		A[i+1]= tmp;
	}
	printf("Swap consecutive numbers are : \n");
	for (i=0; i<12; i++)
	{
		printf("%d\t", A[i]);
	}
	getch();
	return 0;
	
}
