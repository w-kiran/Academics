#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to implement Monte Carlo algorithm to find elements greater than threshold
int monteCarloFindElements(int arr[], int n, int threshold)
{
    int count = 0;

    // Seed the random number generator
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        // Generate a random index in the array
        int randomIndex = rand() % n;

        // Check if the element at the random index is greater than the threshold
        if (arr[randomIndex] > threshold)
        {
            printf("Randomly selected element at index %d: %d\n", randomIndex, arr[randomIndex]);
            count++;
        }
    }

    return count;
}

int main()
{
    int arr[] = {10, 25, 6, 40, 15, 30, 8, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int threshold = 20;
    printf("Array:\n");

    for (int i = 0; i < 8; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n\n");
    int count = monteCarloFindElements(arr, n, threshold);

    printf("\nTotal elements greater than %d found: %d\n", threshold, count);
    printf("\n");
    return 0;
}
