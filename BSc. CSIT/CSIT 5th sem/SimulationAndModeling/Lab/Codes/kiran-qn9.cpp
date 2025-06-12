#include <iostream>
#include <vector>
#include <cmath>

// Function to calculate the Chi-Square statistic
double chi_square_test(const std::vector<int>& observed, const std::vector<int>& expected) {
    double chi_square = 0.0;

    if (observed.size() != expected.size()) {
        std::cerr << "Error: Observed and Expected arrays must have the same size." << std::endl;
        return -1;
    }

    for (size_t i = 0; i < observed.size(); ++i) {
        if (expected[i] == 0) {
            std::cerr << "Error: Expected frequency cannot be zero." << std::endl;
            return -1;
        }
        chi_square += std::pow((double)(observed[i] - expected[i]), 2) / expected[i];
    }

    return chi_square;
}

int main() {
    std::cout << "Kiran Joshi Sukubhattu\n";
    std::cout << "Roll no: 45\n";
    
    // Use constructor-style vector initialization
    int obs_array[] = {12, 15, 8, 11, 14, 10};
    int exp_array[] = {12, 12, 12, 12, 12, 12};

    std::vector<int> observed(obs_array, obs_array + sizeof(obs_array) / sizeof(int));
    std::vector<int> expected(exp_array, exp_array + sizeof(exp_array) / sizeof(int));

    double chi_square_value = chi_square_test(observed, expected);

    if (chi_square_value != -1) {
        std::cout << "Chi-Square Statistic: " << chi_square_value << std::endl;
    }

    return 0;
}

