/*wap to find the sum of 100 numbers.*/

#include<stdio.h>
int main(){

    int i=1,sum=0;  //initilization

     

     // solving by do while loop 
     do{
      sum+=i;
      i++;
      } while(i<=100);
    printf("sum of number: %d",sum);

// solving with while loop 
    while(i<=100){
        sum+=i;
        i++;
    }
    printf("\nSum of number up to one hundred: %d");
    
     
    return 0;
}