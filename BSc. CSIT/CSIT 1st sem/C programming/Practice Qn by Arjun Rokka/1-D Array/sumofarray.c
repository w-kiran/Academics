#include<stdio.h>
int sum_of_array(int arr[],int n);  //declaration of function
int main(){
  int arr[100];
  int i,n,sum;

  // taking input from the user
  printf("Enter a number of array: ");
  scanf("%d",&n);
  printf("Now, Enter the elements of an array: ");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

// calling of a function
  sum=sum_of_array(arr,n);
  printf("Sum of array: %d",sum);
  return 0;
}

// defining a function
int sum_of_array(int arr[],int n){
    // calulation part
    int sum=0,i;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }

    return sum;

}

