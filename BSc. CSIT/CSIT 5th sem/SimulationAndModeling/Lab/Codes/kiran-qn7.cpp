#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <math.h> // For erf()

// Normal distribution cumulative distribution function (CDF)
double normal_cdf(double x, double mean, double stddev) {
    return 0.5 * (1 + ::erf((x - mean) / (stddev * std::sqrt(2))));
}

// Kolmogorov-Smirnov Test
double ks_test(const std::vector<double>& sample) {
    double mean = 0.0;
    for (size_t i = 0; i < sample.size(); ++i) {
        mean += sample[i];
    }
    mean /= sample.size();

    double variance = 0.0;
    for (size_t i = 0; i < sample.size(); ++i) {
        variance += std::pow(sample[i] - mean, 2);
    }
    variance /= sample.size();

    double stddev = std::sqrt(variance);

    std::vector<double> sorted_sample = sample;
    std::sort(sorted_sample.begin(), sorted_sample.end());

    double d_max = 0.0;
    for (size_t i = 0; i < sorted_sample.size(); ++i) {
        double cdf_value = normal_cdf(sorted_sample[i], mean, stddev);
        double empirical_cdf = (i + 1) / static_cast<double>(sorted_sample.size());
        double diff = std::abs(empirical_cdf - cdf_value);
        if (diff > d_max) d_max = diff;
    }

    return d_max;
}


int main() {
    std::cout<<"Kiran Joshi Sukubhattu\n";
    std::cout<<"Roll no: 45 \n";
    double sample_array[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    std::vector<double> sample(sample_array, sample_array + 10);

    double ks_statistic = ks_test(sample);
    std::cout << "KS Statistic (D value): " << ks_statistic << std::endl;

    return 0;
}

