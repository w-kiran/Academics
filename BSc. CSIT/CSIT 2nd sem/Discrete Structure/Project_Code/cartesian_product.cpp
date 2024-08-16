#include <iostream>
using namespace std;
int main()
{
    int setA[] = {2, 4, 8};
    int setB[] = {3, 5, 7};
    int szA = sizeof(setA) / sizeof(setA[0]);
    int szB = sizeof(setA) / sizeof(setB[0]);
    int i, j;
    cout << "Cartesian Product: \n";
    cout << "{";
    for (i = 0; i < szA; i++)
    {
        for (j = 0; j < szB; j++)
        {
            cout << "(" << setA[i] << "," << setB[j] << ")";
        }
    }
    cout << "}";

    return 0;
}