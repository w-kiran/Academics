#include <iostream>

using namespace std;

class MultiplicativeCongruentialGenerator {
private:
    long long seed;
    long long a;
    long long m;

public:
    MultiplicativeCongruentialGenerator(long long seed, long long a, long long m) : seed(seed), a(a), m(m) {}

    double next() {
        seed = (a * seed) % m;
        return static_cast<double>(seed) / m;
    }
};

int main() {
    cout<<"Kiran Joshi Sukubhattu\n";
    cout<<"Roll no: 45 \n";
    long long seed = 12345;  // Initial seed
    long long a = 1664525;   // Multiplier
    long long m = 2147483647; // Modulus
    
    MultiplicativeCongruentialGenerator mcg(seed, a, m);
    
    cout << "Random numbers generated using Multiplicative Congruential Method:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << mcg.next() << endl;
    }
    
    return 0;
}
