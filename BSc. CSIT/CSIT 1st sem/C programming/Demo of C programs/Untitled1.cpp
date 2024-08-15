#include <stdio.h>
#include <conio.h>
int main()
{
	int marks;
	printf("Enter your mark");
	scanf("%d", &marks);
	for(marks=0; marks<=100; marks++)
	{
		switch(marks)
		{
			case 0:
				printf("E grade");
				break;
		}
	}
	getch();
	return 0;
}
