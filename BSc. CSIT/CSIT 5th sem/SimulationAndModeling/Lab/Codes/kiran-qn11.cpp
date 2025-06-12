#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void machine_tool_basic(int n) {
    srand(time(0));
    for (int i = 0; i < n; i++) {
        double inspection_time = 4 + (rand() % 7 - 3); // 4±3 minutes
        double reject_prob = (rand() % 100) / 100.0;
        cout << "Part " << i + 1 << " inspection time: " << inspection_time << " minutes";
        if (reject_prob < 0.1) {
            cout << " - Rejected";
        }
        cout << endl;
    }
}


int main() {
    std::cout << "Kiran Joshi Sukubhattu\n";
    std::cout << "Roll no: 45 \n";

    int n = 10;
    cout << "Machine Tool Manufacturing (Basic):\n";
    machine_tool_basic(n);
    return 0;

}
