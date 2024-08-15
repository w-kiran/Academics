// [19 16 22 14 10 21]
#include <stdio.h>
#include <conio.h>
int main()
{
int A[]= {16, 18, 14, 19, 17, 15};
	int i, j, tmp;
	for(i=0; i<5; i++)
	{
		for (j=0; j<5-i; j++)
		if (A[j]> A[j+1])
		{
			
			tmp= A[j];
			A[j]= A[j+1];
			A[j+1]= tmp;
			
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
	

