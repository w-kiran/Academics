#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double monte_carlo_pi(int num_samples) {
    int inside_circle = 0;
    srand(time(0));
    
    for (int i = 0; i < num_samples; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        
        if (x * x + y * y <= 1) {
            inside_circle++;
        }
    }
    
    return (static_cast<double>(inside_circle) / num_samples) * 4;
}

int main() {
    cout<<"Kiran Joshi Sukubhattu\n";
    cout<<"Roll no: 45 \n";
    int num_samples = 1000000; // Adjust the number of samples for accuracy
    double estimated_pi = monte_carlo_pi(num_samples);
    cout << "Estimated pie using " << num_samples << " samples: " << estimated_pi << endl;
    return 0;
}
