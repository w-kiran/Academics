/* input                      output
enter 10 numbers
20                              60
60                              20
40                              10
10                              40
30                              90
90                              30
80                              70
70                              80
50                              100
100                             50
c-program to swap consecutive pairs in array
*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int A[10], i, tmp;
	printf("\n Enter 10 numbers: \n");
	for (i=0; i<10; i++)
	{ 
	scanf("%d", &A[i]);
	}
	for (i=0; i<10; i+=2)
	{ 
	tmp= A[i];
	A[i]= A[i+1];
	A[i+1]= tmp;
	}
	printf("\n List after swap operation: \n");
	for(i=0; i<10; i++)
	{
		printf("%d \t", A[i]);
	}
	getch();
	return 0;
}
