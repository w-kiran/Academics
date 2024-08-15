// Problems with 2 dimensional Array
// Q. WAP in C that adds two (3*4) matrices.
#include <stdio.h>
#include <conio.h>
int main()
{
	int A[3][4]= {{0,1,2,3}, {4,4,4,4}, {2,6,4,5}};
	int B[3][4]= {{2,2,2,2}, {3,3,3,3}, {10,4,5,7}};
	int C[3][4], i, j;
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++)
		{
			C[i][j]= A[i][j]+ B[i][j];
		}
	}
	printf("\n Sum matrix:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d\t", C[i][j]);
		}
	
	
	
	printf("\n");
}
	getch();
	return 0;
	
	
}
