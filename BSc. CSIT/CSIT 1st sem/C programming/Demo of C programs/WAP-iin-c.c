//WAP in C that takes a string as input from keyboars=d and counts total vowels in it
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char str[100], ch; // if input is apple. then ch=a, ch=b...
	int vowel_count = 0;
	int i;
	printf(" Enter a string: \n ");
	gets(str);
	for(i=0; i< strlen(str); i++)
	{
		ch= str[i];
		if(ch== 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
		{
			vowel_count++;
		}
	}
	
	printf("\n Total vowels: %d", vowel_count);
	getch();
	return 0;
	
}
