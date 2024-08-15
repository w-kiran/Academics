/* switch statement for displaying corresponding grade for marks taken as input from keyboard;
marks  0-19  20-39  40-59  60-79  80-100
grade  E     D       C      B      A */
#include <stdio.h>
#include <conio.h>
int main()
{
	int marks;
	printf("Enter the marks between 1-100: ");
	scanf("%d", &marks);
	if(marks<0 || marks>100)
	{
		printf("invalid");
		getch();
		return 0;
		
	}
	marks=marks/10;
	switch(marks)
	{
		case 0:
		case 1:printf("\nGrade E"); break;
		case 2:
		case 3:printf("\nGrade D"); break;
		case 4:
		case 5:printf("\nGrade C"); break;
		case 6:
		case 7:printf("\nGrade B"); break;
		case 8:
		case 9:
			case 10: printf("\nGrade A"); break;
	}
	getch();
	return 0;
}

