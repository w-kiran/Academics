// factorial of a number
#include<stdio.h>
#include<stdlib.h>

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}



int main(){
    int i,n,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n));

    for(i=n;i>=1;i--){
        f=f*i;
     }
    printf("\nThe simple factorial of the number is %d",f);
    return 0;

}

/*
Basic: if n=1 or 0 then return 1
General: n*fact(n-1)
eg. 5! = 5*4*3*2*1
*/