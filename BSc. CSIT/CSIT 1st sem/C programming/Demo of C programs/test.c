#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{

	int x1,x2,y1,y2,r1,r2;
	printf("enter coordinates and radius of first circle: \n");
	scanf("%d%d%d", &x1, &y1, &r1);
	printf("\n enter coordinates and radius of second circle:\n");
	scanf("%d%d%d", &x2, &y2, &r2);
	float L= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	int R=r1+r2;
	if (R<L)
	{
		printf("the circles is disjoint");
	}
	else if(R>L)
	{
		printf(" the circles intersect each other");
	}
	else {
		printf("the circles touch each other");
	}
	return 0;
}




