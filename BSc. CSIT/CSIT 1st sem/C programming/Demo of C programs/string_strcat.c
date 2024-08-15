#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char str1[]= "red";
	char str2[]= "apple";
	strcat( str1, str2);
	printf("%s", str1);
	getch();
	return 0;
}
