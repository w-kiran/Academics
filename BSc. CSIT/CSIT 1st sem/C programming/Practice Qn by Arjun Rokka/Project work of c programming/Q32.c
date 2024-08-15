#include <stdio.h>

void printArraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("The sum of the array is: %d\n", sum);
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int myArray[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &myArray[i]);
    }
    printArraySum(myArray, size);
    return 0;
}
