#include <stdio.h>

struct Process {
    int pid;
    int burst_time;
    int priority;
    int remaining_time;
    int waiting_time;
    int turnaround_time;
};

void priorityScheduling(struct Process proc[], int n) {
    int t = 0, completed = 0, highest_priority = 0, min_priority;

    while (completed != n) {
        min_priority = 9999;
        int idx = -1;

        for (int i = 0; i < n; i++) {
            if (proc[i].remaining_time > 0 && proc[i].priority < min_priority) {
                min_priority = proc[i].priority;
                idx = i;
            }
        }

        if (idx != -1) {
            proc[idx].remaining_time--;
            t++;

            if (proc[idx].remaining_time == 0) {
                proc[idx].turnaround_time = t;
                proc[idx].waiting_time = t - proc[idx].burst_time;
                completed++;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process proc[n];

    for (int i = 0; i < n; i++) {
        proc[i].pid = i + 1;
        printf("Enter burst time for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].burst_time);
        printf("Enter priority for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].priority);
        proc[i].remaining_time = proc[i].burst_time;
        proc[i].waiting_time = 0;
    }

    priorityScheduling(proc, n);
    
    printf("\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].burst_time, proc[i].priority, proc[i].waiting_time, proc[i].turnaround_time);
    }

    return 0;
}

