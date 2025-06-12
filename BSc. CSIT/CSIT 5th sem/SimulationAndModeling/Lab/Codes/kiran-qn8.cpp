#include <iostream>
#include <vector>
#include <cmath>

// Function to calculate the mean of the dataset
double mean(const std::vector<double>& data) {
    double sum = 0.0;
    for (size_t i = 0; i < data.size(); ++i) {
        sum += data[i];
    }
    return sum / data.size();
}

// Function to calculate the autocorrelation for a given lag
double autocorrelation(const std::vector<double>& data, int lag) {
    int n = data.size();
    double mu = mean(data);

    double numerator = 0.0;
    double denominator = 0.0;

    for (int i = 0; i < n - lag; ++i) {
        numerator += (data[i] - mu) * (data[i + lag] - mu);
    }

    for (int i = 0; i < n; ++i) {
        denominator += std::pow(data[i] - mu, 2);
    }

    return numerator / denominator;
}


int main() {
    std::cout << "Kiran Joshi Sukubhattu\n";
    std::cout << "Roll no: 45 \n";
std::vector<double> data;
    data.push_back(0.1);
    data.push_back(0.2);
    data.push_back(0.3);
    data.push_back(0.4);
    data.push_back(0.5);
    data.push_back(0.6);
    data.push_back(0.7);
    data.push_back(0.8);
    data.push_back(0.9);
    data.push_back(1.0);

    int max_lag = 5;

    std::cout << "Autocorrelation values for lags from 1 to " << max_lag << ":\n";

    for (int lag = 1; lag <= max_lag; ++lag) {
        double acf_value = autocorrelation(data, lag);
        std::cout << "Lag " << lag << ": " << acf_value << std::endl;
    }

    return 0;
}

