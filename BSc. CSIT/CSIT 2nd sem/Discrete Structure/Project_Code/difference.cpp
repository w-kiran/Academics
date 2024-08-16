// #include <stdio.h>
// #include <conio.h>
// #define MAX 40

// declaring a function
// void create(int set[], int);
// int SetDifference(int set1[], int, int set2[], int, int set3[]);

// int main()
// {
//     int set1[MAX], set2[MAX], set3[MAX], L, i;
//     int N, M; // Lenth of set1 is N , Lenth of set2 is M

//     printf("\nNo. of elements in the SET1 : ");
//     scanf("%d", &N);

//     printf("\nNo. of elements in the SET2: ");
//     scanf("%d", &M);

//     printf("\n ++++++++++++++++++++++++++++++\n");

//     printf("Enter elements of SET1");
//     create(set1, N);

//     printf("Enter elements of SET2");
//     create(set2, M);

//     L = SetDifference(set1, N, set2, M, set3);

//     printf("\n SetDifference of two sets: set2-set1:      ");
//     for (i = 0; i < L; i++)
//         printf("%d  ", set3[i]);
// }

// void create(int set[], int n)
// {
//     int i, x;
//     printf("\nEnter set elements : \n");
//     for (i = 0; i < n; i++)
//         scanf("%d", &set[i]);
// }

// int SetDifference(int set1[], int n, int set2[], int m, int set3[])
// {
//     int k = 0, i, j, flag;

//     for (i = 0; i < m; i++)
//     {
//         flag = 1;
//         for (j = 0; j < n; j++)
//         {
//             if (set2[i] == set1[j])
//             {
//                 flag = 0;
//                 break;
//             }
//         }

//         if (flag == 1)
//             set3[k++] = set2[i];
//     }

//     return k--;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 5, 6, 8}, arr2[] = {3, 9, 10, 7, 11, 30};
    int sizeA = sizeof(arr1) / sizeof(arr1[0]), sizeB = sizeof(arr2) / sizeof(arr2[0]);
    int diff[sizeA];
    int i, j, k = 0, flag;
    // logic for difference of sets, arr1-arr2
    for (i = 0; i < sizeA; i++)
    {
        flag = 1;
        for (j = 0; j < sizeB; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            diff[k] = arr1[i];
            k++;
        }
    }

    // displaying
    cout << "Difference: ";
    for (i = 0; i < k; i++)
    {
        cout << diff[i] << " ";
    }

    return 0;
}
