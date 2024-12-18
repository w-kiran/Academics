#include <stdio.h>

// Function to sort processes by priority
void sortByPriority(int n, int processes[], int bt[], int pr[], int wt[], int tat[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (pr[i] > pr[j]) {
                // Swap priority
                int temp = pr[i];
                pr[i] = pr[j];
                pr[j] = temp;

                // Swap burst time
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                // Swap process number
                temp = processes[i];
                processes[i] = processes[j];
                processes[j] = temp;
            }
        }
    }
}

void findWaitingTime(int processes[], int n, int bt[], int wt[]) {
    wt[0] = 0;  // First process has no waiting time

    for (int i = 1; i < n; i++) {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
}

void findTurnaroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

void findAverageTime(int processes[], int n, int bt[], int pr[]) {
    int wt[n], tat[n];
    int total_wt = 0, total_tat = 0;

    sortByPriority(n, processes, bt, pr, wt, tat);  // Sort processes by priority
    findWaitingTime(processes, n, bt, wt);
    findTurnaroundTime(processes, n, bt, wt, tat);

    printf("Processes   Burst time   Priority   Waiting time   Turnaround time\n");
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf("   %d ", processes[i]);
        printf("\t\t%d ", bt[i]);
        printf("\t\t%d", pr[i]);
        printf("\t\t%d", wt[i]);
        printf("\t\t%d\n", tat[i]);
    }

    printf("Average waiting time = %.2f\n", (float)total_wt / n);
    printf("Average turnaround time = %.2f\n", (float)total_tat / n);
}

int main() {
    int processes[] = {1, 2, 3, 4};
    int n = sizeof(processes) / sizeof(processes[0]);

    int burst_time[] = {1, 4, 6, 3};  // Burst time of processes
    int priority[] = {5, 1, 6, 7};     // Priority of processes

    findAverageTime(processes, n, burst_time, priority);

    return 0;
}
