#include <iostream>
using namespace std;

void Distribute(int Siz, int Mu, int set[], float Mem[])
{
    for (int i = 0; i < Siz; i++)
    {
        for (int j = 0; j < Mu; j++)
        {
            if (i == j)
            {
                cout << "(" << set[i] << "," << Mem[j] << ") ";
            }
        }
    }
}
void intersection(int size, float MemA[], float MemB[])
{
    cout << "\nIntersection: ";
    for (int i = 0; i < size; i++)
    {

        (MemA[i] < MemB[i]) ? cout << MemA[i] << "   " : cout << MemB[i] << "   ";
    }
}

void Union(int size, float MemA[], float MemB[])
{
    cout << "\nUnion: ";
    for (int i = 0; i < size; i++)
    {

        (MemA[i] > MemB[i]) ? cout << MemA[i] << "   " : cout << MemB[i] << "   ";
    }
}
void Complement(int size, float Mem[])
{
    for (int i = 0; i < size; i++)
    {
        cout << 1.0 - Mem[i] << "   ";
    }
}
int main()
{
    int setA[] = {1, 2, 3, 5, 7};
    float MemA[] = {0.3, 0.5, 0.7, 0.42, 0.65};
    int setB[] = {2, 5, 6, 4, 8};
    float MemB[] = {0.6, 0.1, 0.8, 0.3, 0.9};

    int SA = sizeof(setA) / sizeof(setA[0]);
    int MA = sizeof(MemA) / sizeof(MemA[0]);
    int SB = sizeof(setB) / sizeof(setB[0]);
    int MB = sizeof(MemB) / sizeof(MemB[0]);
    cout << "\nSet A: ";
    Distribute(SA, MA, setA, MemA);
    cout << "\nSet B: ";
    Distribute(SB, MB, setB, MemB);
    cout << endl;
    intersection(MA, MemA, MemB);
    Union(MA, MemA, MemB);
    cout << "\n\nComplement of Set A: ";
    Complement(MA, MemA);
    cout << "\nComplement of Set B: ";

    Complement(MA, MemB);

    return 0;
}
