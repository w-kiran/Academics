#include<stdio.h>
int factorial(int);
void main(){
    int a ,f=1,i;
    printf("Enter any number for finding its factorial ");
    scanf("%d",&a);

printf("factorial %d",factorial(a));



}

int factorial(int a)
{
 if (a==1||a==0){
    return 1;

 }
     else{
        return a*factorial(a-1);
        
     }
}