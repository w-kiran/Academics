#include <stdio.h>
#include <stdbool.h>

#define P 5 // Number of processes
#define R 3 // Number of resource types

void calculateNeed(int need[P][R], int max[P][R], int allocation[P][R]) {
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = max[i][j] - allocation[i][j];
}

bool isSafe(int processes[], int avail[], int max[][R], int allocation[][R]) {
    int need[P][R];
    calculateNeed(need, max, allocation);

    bool finish[P] = {false};
    int safeSeq[P];
    int work[R];

    for (int i = 0; i < R; i++)
        work[i] = avail[i];

    int count = 0;
    while (count < P) {
        bool found = false;
        for (int p = 0; p < P; p++) {
            if (finish[p] == false) {
                int j;
                for (j = 0; j < R; j++)
                    if (need[p][j] > work[j])
                        break;

                if (j == R) {
                    for (int k = 0 ; k < R ; k++)
                        work[k] += allocation[p][k];

                    safeSeq[count++] = p;
                    finish[p] = true;
                    found = true;
                }
            }
        }

        if (found == false) {
            printf("System is not in a safe state\n");
            return false;
        }
    }

    printf("System is in a safe state.\nSafe sequence is: ");
    for (int i = 0; i < P; i++)
        printf("%d ", safeSeq[i]);
    printf("\n");

    return true;
}

int main() {
    int processes[] = {0, 1, 2, 3, 4};

    int avail[] = {3, 3, 2}; // Available instances of resources

    int max[P][R] = { {7, 5, 3}, // Max demand of each process
                      {3, 2, 2},
                      {9, 0, 2},
                      {2, 2, 2},
                      {4, 3, 3} };

    int allocation[P][R] = { {0, 1, 0}, // Resources currently allocated to each process
                              {2, 0, 0},
                              {3, 0, 2},
                              {2, 1, 1},
                              {0, 0, 2} };

    isSafe(processes, avail, max, allocation);

    return 0;
}

