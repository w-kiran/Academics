#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to get the next state based on transition probabilities
int getNextState(int current_state, const vector<vector<double> >& transition_matrix) {
    double rand_prob = (double)rand() / RAND_MAX; // Generate a random number between 0 and 1
    double cumulative_prob = 0.0;

    for (size_t i = 0; i < transition_matrix[current_state].size(); i++) {
        cumulative_prob += transition_matrix[current_state][i];
        if (rand_prob < cumulative_prob) {
            return i; // Return next state
        }
    }
    return current_state; // Fallback (should not reach here normally)
}

int main() {
	cout<<"Kiran Joshi Sukubhattu\n";
    cout<<"Roll no: 45 \n";
    srand(time(0)); // Seed for randomness

    int num_states;
    cout << "Enter number of states: ";
    cin >> num_states;

    vector<vector<double> > transition_matrix(num_states, vector<double>(num_states));

    cout << "Enter transition matrix (each row should sum to 1):\n";
    for (int i = 0; i < num_states; i++) {
        for (int j = 0; j < num_states; j++) {
            cin >> transition_matrix[i][j];
        }
    }

    int current_state;
    cout << "Enter initial state (0 to " << num_states - 1 << "): ";
    cin >> current_state;

    int num_steps;
    cout << "Enter number of steps: ";
    cin >> num_steps;

    cout << "\nState Transitions:\n";
    for (int step = 0; step < num_steps; step++) {
        cout << "Step " << step + 1 << ": State " << current_state << " -> ";
        current_state = getNextState(current_state, transition_matrix);
        cout << "State " << current_state << "\n";
    }

    return 0;
}
