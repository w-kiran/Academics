#include <iostream>
#include <sstream> // For stringstream
#include <iomanip> // For setw and setfill

using namespace std;

class MidSquareGenerator {
private:
    long long seed;

public:
    MidSquareGenerator(long long initial_seed) : seed(initial_seed) {}

    long long next() {
        seed *= seed; // Square the seed

        // Convert to string with zero-padding
        stringstream ss;
        ss << setw(8) << setfill('0') << seed;
        string seed_str = ss.str();

        int length = seed_str.length();
        int mid = length / 2;

        // Extract middle 4 digits
        string mid_digits = seed_str.substr(mid - 2, 4);

        stringstream convert(mid_digits);
        convert >> seed;

        return seed;
    }
};


int main() {
    cout<<"Kiran Joshi Sukubhattu\n";
    cout<<"Roll no: 45 \n";
    long long seed = 1234;  // Initial seed
    MidSquareGenerator msg(seed);
    
    cout << "Random numbers generated using Mid-Square Method:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << msg.next() << endl;
    }
    
    return 0;
}
