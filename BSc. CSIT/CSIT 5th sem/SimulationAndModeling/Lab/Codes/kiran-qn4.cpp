#include <iostream>

using namespace std;

// Function to generate random numbers using LCG
void generateRandomNumbers(int seed, int a, int c, int m, int n) {
    int X = seed; // Initialize seed
    cout << "Generated Random Numbers: \n";

    for (int i = 0; i < n; i++) {
        X = (a * X + c) % m; // LCG formula
        cout << X << " ";
    }
    cout << endl;
}

int main() {
    cout<<"Kiran Joshi Sukubhattu\n";
    cout<<"Roll no: 45 \n";
    int seed, a, c, m, n;

    // User inputs
    cout << "Enter seed value: ";
    cin >> seed;
    cout << "Enter multiplier (a): ";
    cin >> a;
    cout << "Enter increment (c): ";
    cin >> c;
    cout << "Enter modulus (m): ";
    cin >> m;
    cout << "Enter number of random numbers to generate (n): ";
    cin >> n;

    // Generate and display random numbers
    generateRandomNumbers(seed, a, c, m, n);

    return 0;
}
