#include <iostream>
#include <vector>
#include <cmath>

// Function to calculate the observed gaps between the occurrences of 1 in the binary sequence
std::vector<int> calculate_gaps(const std::vector<int>& sequence) {
    std::vector<int> gaps;
    int n = sequence.size();
    int last_pos = -1;  // Position of the last occurrence of 1

    // Iterate through the sequence and calculate gaps between 1's
    for (int i = 0; i < n; ++i) {
        if (sequence[i] == 1) {
            if (last_pos != -1) {
                gaps.push_back(i - last_pos - 1);  // Store the gap between consecutive 1's
            }
            last_pos = i;
        }
    }
    return gaps;
}

// Function to perform the Gap Test
void gap_test(const std::vector<int>& sequence) {
    // Calculate gaps between 1's
    std::vector<int> gaps = calculate_gaps(sequence);

    // If there are no gaps, the sequence contains no 1's
    if (gaps.empty()) {
        std::cout << "No 1's in the sequence." << std::endl;
        return;
    }

    // Calculate the mean gap
    int total_gap = 0;
    for (size_t i = 0; i < gaps.size(); ++i) {
        total_gap += gaps[i];
    }
    double mean_gap = static_cast<double>(total_gap) / gaps.size();

    // Calculate the total number of elements in the sequence
    int n = sequence.size();

    // Calculate the expected gap if the sequence were random
    double expected_gap = static_cast<double>(n) / (gaps.size() + 1);

    // Output the results
    std::cout << "Observed Gaps: ";
    for (size_t i = 0; i < gaps.size(); ++i) {
        std::cout << gaps[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Mean Gap: " << mean_gap << std::endl;
    std::cout << "Expected Gap for a Random Sequence: " << expected_gap << std::endl;

    // Compare the observed mean gap with the expected gap
    if (std::fabs(mean_gap - expected_gap) < 0.1 * expected_gap) {
        std::cout << "The sequence appears to be random." << std::endl;
    } else {
        std::cout << "The sequence does not appear to be random." << std::endl;
    }
}


int main() {
    std::cout << "Kiran Joshi Sukubhattu\n";
    std::cout << "Roll no: 45\n";
    
    // Construct the binary sequence using push_back to be C++98 compatible
    std::vector<int> sequence;
    int values[] = {0, 1, 0, 0, 1, 0, 1, 0, 0, 1};
    for (int i = 0; i < 10; ++i) {
        sequence.push_back(values[i]);
    }

    // Perform Gap Test
    gap_test(sequence);
    
    return 0;
}

