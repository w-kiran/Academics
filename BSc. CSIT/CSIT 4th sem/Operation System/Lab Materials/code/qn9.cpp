#include <stdio.h>
#include <stdbool.h>

#define MAX_PROCESSES 10
#define MEMORY_SIZE 1000  // Total memory size for MVT

void mvt() {
    int memory = MEMORY_SIZE;
    int processSize[MAX_PROCESSES];
    int allocated[MAX_PROCESSES] = {0};
    int processCount = 0;

    printf("MVT Memory Management Technique\n");
    while (1) {
        int choice;
        printf("\n1. Add Process\n2. Remove Process\n3. Exit\nChoose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (processCount >= MAX_PROCESSES) {
                printf("Cannot add more processes. Maximum process limit reached.\n");
                continue;
            }

            printf("Enter process size: ");
            scanf("%d", &processSize[processCount]);

            if (processSize[processCount] <= memory) {
                memory -= processSize[processCount];
                allocated[processCount] = 1;
                printf("Process %d allocated %d memory. Remaining memory: %d\n", processCount + 1, processSize[processCount], memory);
                processCount++;
            } else {
                printf("Not enough memory to allocate process %d. Remaining memory: %d\n", processCount + 1, memory);
            }
        } else if (choice == 2) {
            int processID;
            printf("Enter process ID to remove: ");
            scanf("%d", &processID);

            if (processID > 0 && processID <= processCount && allocated[processID - 1]) {
                memory += processSize[processID - 1];
                allocated[processID - 1] = 0;
                printf("Process %d deallocated. Remaining memory: %d\n", processID, memory);
            } else {
                printf("Invalid process ID.\n");
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
}

void mft() {
    int partitionSize;
    int processSize[MAX_PROCESSES];
    int allocated[MAX_PROCESSES] = {0};
    int partitions[MAX_PROCESSES];
    int processCount = 0;
    int partitionCount;

    printf("\nMFT Memory Management Technique\n");

    printf("Enter partition size: ");
    scanf("%d", &partitionSize);

    printf("Enter number of partitions: ");
    scanf("%d", &partitionCount);

    for (int i = 0; i < partitionCount; i++) {
        partitions[i] = partitionSize;
    }

    while (1) {
        int choice;
        printf("\n1. Add Process\n2. Remove Process\n3. Exit\nChoose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (processCount >= MAX_PROCESSES) {
                printf("Cannot add more processes. Maximum process limit reached.\n");
                continue;
            }

            printf("Enter process size: ");
            scanf("%d", &processSize[processCount]);

            bool allocatedFlag = false;
            for (int i = 0; i < partitionCount; i++) {
                if (partitions[i] >= processSize[processCount] && allocated[i] == 0) {
                    allocated[i] = 1;
                    partitions[i] -= processSize[processCount];
                    printf("Process %d allocated %d memory in partition %d.\n", processCount + 1, processSize[processCount], i + 1);
                    allocatedFlag = true;
                    break;
                }
            }

            if (!allocatedFlag) {
                printf("No suitable partition available for process %d.\n", processCount + 1);
            } else {
                processCount++;
            }
        } else if (choice == 2) {
            int processID;
            printf("Enter process ID to remove: ");
            scanf("%d", &processID);

            if (processID > 0 && processID <= processCount && allocated[processID - 1]) {
                for (int i = 0; i < partitionCount; i++) {
                    if (allocated[i] == 1 && processSize[processID - 1] == partitionSize - partitions[i]) {
                        partitions[i] = partitionSize;
                        allocated[i] = 0;
                        printf("Process %d deallocated from partition %d.\n", processID, i + 1);
                        break;
                    }
                }
            } else {
                printf("Invalid process ID.\n");
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nMemory Management Techniques Simulation\n");
        printf("1. MVT (Multiprogramming with a Variable number of Tasks)\n");
        printf("2. MFT (Multiprogramming with a Fixed number of Tasks)\n");
        printf("3. Exit\nChoose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            mvt();
        } else if (choice == 2) {
            mft();
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}

