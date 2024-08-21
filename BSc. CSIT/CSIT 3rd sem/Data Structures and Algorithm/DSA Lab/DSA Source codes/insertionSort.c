#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("% d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        printf("% d ", arr[i]);
    }
    printf("\n");

    return 0;
}