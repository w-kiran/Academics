#include<stdio.h>
int main(){
    char str[30]="Arjun";
    char character[]={'A','R','J','U','N','\0'};
    // 1st way to taking input from user
    // printf("Enter any string: ");
    // scanf("%[^\n]",str); //it store space also 
    // scanf("%s",str);  // it doesn't store space
    // printf("%s",str);

    // 2nd way of taking input
    // gets(str);
    // puts(str);

    
    printf("%s",character);
    

    return 0;
}