#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float set[] = {2.10, 5.6, 3.99};
    int size = sizeof(set) / sizeof(set[0]);
    int i;
    cout << "\nFloor: ";
    for (i = 0; i < size; i++)
    {
        cout << " " << floor(set[i]) << " ";
    }
    cout << "\nCeiling: ";
    for (i = 0; i < size; i++)
    {
        cout << " " << ceil(set[i]) << " ";
    }
    return 0;
}