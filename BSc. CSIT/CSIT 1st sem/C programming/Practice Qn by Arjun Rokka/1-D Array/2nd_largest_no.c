#include<stdio.h>
#define max 100
int main() {
    int a[max];
    int i,j,temp,n;
    printf("Enter the number of array: ");
    scanf("%d",&n);
    printf("Enter the element of an arry: ");
    for(i= 0 ;i < n;i++)
    {
        scanf("%d",&a[i]);

    }
// sorting first
    for (i=0;i < n-1;i++)
    {
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }
    }

// sorted array
    printf("Sorted array is: ");
        for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    // printing

    printf("\nThe second largest element is %d ",a[i-2]);
    return 0;

}