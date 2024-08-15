// WAP in C that takes 10 numbers as input from the keyboard and finds the maximum. IMP Question
#include <stdio.h>
#include <conio.h>
int main()
{
 int A[10], i, max;
 printf("Enter 10 numbers:\n");
 for(i=0; i<10; i++)
 {
 	
 	scanf("%d", &A[i]);
	 }	
	max= A[0];
	for(i=1; i<10; i++)
	{
		if(max< A[i])
		{
			max= A[i];
		}
	}
	printf("\n Largest number : %d", max);// WAP in C that takes 10 numbers as input from the keyboard and finds the maximum. IMP Question
#include <stdio.h>
#include <conio.h>
int main()
{
 int A[10], i, max;
 printf("Enter 10 numbers:\n");
 for(i=0; i<10; i++)
 {
 	
 	scanf("%d", &A[i]);
	 }	
	max= A[0];
	for(i=1; i<10; i++)
	{
		if(max< A[i])
		{
			max= A[i];
		}
	}
	printf("\n Largest number : %d", max);
	
	
	getch ();
	return 0;
}
	
	
	getch ();
	return 0;
}
