// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr1[] = {2, 3, 4, 8, 10}, arr2[] = {1, 3, 5, 8, 11};
//     int len1 = sizeof(arr1) / sizeof(arr1[0]), len2 = sizeof(arr1) / sizeof(arr1[0]);
//     int i, j;
//     cout << "\nIntersection of two sets is: ";
//     for (i = 0; i < len1; i++)
//     {
//         for (j = 0; j < len2; j++)
//         {
//             if (arr1[i] == arr2[j])
//             {
//                 cout << arr1[i] << " ";
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6}, B[] = {30, 5, 7, 9, 1, 2};
    int sizeA = sizeof(A) / sizeof(A[0]), sizeB = sizeof(B) / sizeof(A[0]);
    int store[sizeA];
    int i, j, k = 0;
    for (i = 0; i < sizeA; i++)
    {
        for (j = 0; j < sizeB; j++)
        {
            if (A[i] == B[j])
            {
                store[k] = A[i];
                k++;

            }
        }
    }
    // displaying
    cout << "Intersection : ";
    for (i = 0; i < k; i++)
    {
        cout << store[i] << " ";
    }
    return 0;
}