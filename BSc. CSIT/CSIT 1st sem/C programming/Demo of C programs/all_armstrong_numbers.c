#include <stdio.h>
#include <conio.h>
int main(){
	int a,b,c,k,tmp;
		for(a=0; a<=9; a++)

	for(b=0; b<=9; b++)
	for(c=0; c<=9; c++)
	{
		tmp= a*100 + b*10 + c;
		k= a*a*a + b*b*b + c*c*c;
	
	if (k== tmp)
 {
 	printf("\nArmstrong numbers are %d", tmp);
	 }	
}
	getch();
	return 0;
}

