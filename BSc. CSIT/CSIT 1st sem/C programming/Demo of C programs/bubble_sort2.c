// using bubble sort write in ascending order [17, 14, 28, 22, 19, 29]
#include <stdio.h>
#include <conio.h>
int main()
{
	int A[]= {17, 14, 28, 22, 19, 29};
	int i, j, tmp;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5-i; j++)
		if(A[j]< A[j+1])
		{
			 tmp= A[j];
			A[j]= A[j+1];
			tmp= A[j+1];
			
		}
		
		
	}
	printf("\n Sorted Numbers:");
	for (i=0; i<6; i++)
	{
		printf("%d\t", A[i]);
	}
	getch();
	return 0;
	
	
	
}
