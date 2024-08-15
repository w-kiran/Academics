    #include <stdio.h>
    #include <string.h>
    #include <conio.h>

     
    int main()
    {
        char username[15];
        char password[12];
     
     
        printf("Enter your username:\t");
        scanf("%s",&username);
     
        printf("Enter your password:\t");
        scanf("%s",&password);
     
        if(strcmp(username,"abc")==0){
            if(strcmp(password,"123")==0){
     
            printf("\n Login Success!");
     
     
            }
			else
			{
        printf("\nInvalid Password");
    }
        }
		else{
        printf("\Invalid Username");
    }
      getch();   
      return 0;
     
    }
