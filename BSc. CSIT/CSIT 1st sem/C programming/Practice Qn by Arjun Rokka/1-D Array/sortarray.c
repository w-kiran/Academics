#include<stdio.h>
#include<stdlib.h>
int main(){
  int arr[100];
  int i,j,temp,n;

  // taking input from the user
  printf("Enter a number of array: ");
  scanf("%d",&n);
  printf("Now, Enter the elements of an array: ");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

// calulation part
for(i=0;i<n-1;i++){
  for(j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
      temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  }
}

printf("Sorted array is: ");
for(i=0;i<n;i++){
  printf("%d\t",arr[i]);
}

  return 0;
}

