#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr;

    // Dynamically allocate memory using malloc()
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    // Prompt user to enter values for the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print the array elements
    printf("The array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Redefine the size of the array using realloc()
    printf("\nEnter the new size of the array: ");
    scanf("%d", &n);
    arr = (int *)realloc(arr, n * sizeof(int));

    // Prompt user to enter values for the resized array
    printf("Enter the new elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print the resized array elements
    printf("The new array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deallocate memory using free()
    free(arr);

    return 0;
}
