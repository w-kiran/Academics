#include <iostream>
#include <iomanip> // For formatted output

using namespace std;

#define MAX_SIZE 10 // Maximum queue size

// Structure to store queue process details
struct Process {
    int id;
    int arrival_time;
    int burst_time;
    int waiting_time;
    int turnaround_time;
};

// Queue Class
class Queue {
private:
    Process queue[MAX_SIZE];
    int front, rear, size;

public:
    Queue() {
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isFull() {
        return size == MAX_SIZE;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(Process p) {
        if (isFull()) {
            cout << "Queue is full!\n";
            return;
        }
        rear = (rear + 1) % MAX_SIZE;
        queue[rear] = p;
        size++;
    }

    Process dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return {-1, 0, 0, 0, 0};
        }
        Process p = queue[front];
        front = (front + 1) % MAX_SIZE;
        size--;
        return p;
    }

    int getSize() {
        return size;
    }

    void calculateQueueParameters() {
        if (isEmpty()) {
            cout << "Queue is empty, no parameters to calculate.\n";
            return;
        }

        int total_waiting_time = 0, total_turnaround_time = 0;
        int completion_time = 0;

        cout << "\nProcess Execution Order:\n";
        cout << "-----------------------------------------\n";
        cout << "ID\tArrival\tBurst\tWaiting\tTurnaround\n";
        cout << "-----------------------------------------\n";

        for (int i = 0; i < size; i++) {
            // Calculate waiting time and turnaround time
            if (i == 0) {
                queue[i].waiting_time = 0; // First process has no waiting time
            } else {
                queue[i].waiting_time = completion_time - queue[i].arrival_time;
                if (queue[i].waiting_time < 0) queue[i].waiting_time = 0;
            }

            queue[i].turnaround_time = queue[i].waiting_time + queue[i].burst_time;
            completion_time += queue[i].burst_time;

            // Sum for averages
            total_waiting_time += queue[i].waiting_time;
            total_turnaround_time += queue[i].turnaround_time;

            // Display process details
            cout << queue[i].id << "\t"
                 << queue[i].arrival_time << "\t"
                 << queue[i].burst_time << "\t"
                 << queue[i].waiting_time << "\t"
                 << queue[i].turnaround_time << "\n";
        }

        // Calculate and display averages
        double avg_waiting_time = (double)total_waiting_time / size;
        double avg_turnaround_time = (double)total_turnaround_time / size;
        double utilization = ((double)completion_time / (completion_time + total_waiting_time)) * 100;

        cout << "-----------------------------------------\n";
        cout << "Average Waiting Time: " << fixed << setprecision(2) << avg_waiting_time << " ms\n";
        cout << "Average Turnaround Time: " << fixed << setprecision(2) << avg_turnaround_time << " ms\n";
        cout << "Queue Utilization: " << fixed << setprecision(2) << utilization << " %\n";
    }
};

int main() {
    cout<<"Kiran Joshi Sukubhattu\n";
    cout<<"Roll no: 45 \n";
    Queue queue;
    int n;

    cout << "Enter number of processes (Max " << MAX_SIZE << "): ";
    cin >> n;

    if (n > MAX_SIZE) {
        cout << "Queue can hold a maximum of " << MAX_SIZE << " processes.\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        Process p;
        cout << "Enter Arrival Time & Burst Time for Process " << (i + 1) << ": ";
        cin >> p.arrival_time >> p.burst_time;
        p.id = i + 1;
        queue.enqueue(p);
    }

    queue.calculateQueueParameters();
    return 0;
}
