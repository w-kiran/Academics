#include <stdio.h>
#include <conio.h>
int main ()
{
	int num,r,q, sum=0, tmp;
	printf("Enter a number: \n");
	scanf("%d", &num);
	tmp= num;
	while(tmp!=10)
{
	r= tmp%10;
	tmp= tmp/10;
	sum= r*r*r+sum;
	
	}	
	if (sum == num)
	{
		printf("\n %d is an armstrong number", num);
	}
	else 
	{
		printf("\n %d is not an armstrong number", num);
	}
	
	getch();
	return 0;
}
