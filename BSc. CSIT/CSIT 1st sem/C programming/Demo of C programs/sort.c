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
c- program to sort the  numbers in ascending orders 
sorting: It is the process of arranging  elements of a random/input list in some particular order
(ascending or descending)*/
#include <stdio.h>
#include <conio.h>
int main()
{
	int A[10], i;
    printf("\n Enter 10 numbers: \n");
	for (i=0; i<10; i++)
	{
		scanf("%d", &A[i]);
		
	}
	getch();
	return 0;
}
