#include <stdio.h>

struct Process {
    int pid;
    int burst_time;
    int remaining_time;
    int waiting_time;
    int turnaround_time;
};

void roundRobin(struct Process proc[], int n, int quantum) {
    int t = 0;
    int completed = 0;

    while (completed != n) {
        for (int i = 0; i < n; i++) {
            if (proc[i].remaining_time > 0) {
                if (proc[i].remaining_time > quantum) {
                    t += quantum;
                    proc[i].remaining_time -= quantum;
                } else {
                    t += proc[i].remaining_time;
                    proc[i].waiting_time = t - proc[i].burst_time;
                    proc[i].remaining_time = 0;
                    proc[i].turnaround_time = t;
                    completed++;
                }
            }
        }
    }
}

int main() {
    int n, quantum;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process proc[n];
    
    for (int i = 0; i < n; i++) {
        proc[i].pid = i + 1;
        printf("Enter burst time for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].burst_time);
        proc[i].remaining_time = proc[i].burst_time;
        proc[i].waiting_time = 0;
    }
    
    printf("Enter time quantum: ");
    scanf("%d", &quantum);

    roundRobin(proc, n, quantum);
    
    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].burst_time, proc[i].waiting_time, proc[i].turnaround_time);
    }

    return 0;
}

