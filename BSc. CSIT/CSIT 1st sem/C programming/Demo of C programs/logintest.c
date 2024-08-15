#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char username[100];
	char password[100];
	
	printf("Enter your username: ");
	scanf("%s", &username);
	
	printf("Enter your password: ");
	scanf("%s", &password);
	if(strcmp(username, "abc")==0)
	{
		if(strcmp(password, "123")==0)
		{
			printf("\nLogin success! Welcome");
		}
		else {
			printf("\nInvalid Password");
		}

		}
		else {
			printf("Invalid Username");
		}
	getch();
	return 0;
}
