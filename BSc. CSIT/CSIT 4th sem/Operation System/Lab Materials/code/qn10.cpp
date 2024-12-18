#include <stdio.h>

#define FRAME_SIZE 256  // Frame size
#define MEMORY_SIZE 1024 // Total memory size
#define PAGE_SIZE 256 // Page size

int main() {
    int logical_address, page_number, offset, frame_number, physical_address;
    int page_table[4]; // Assume we have 4 pages, hence 4 entries in the page table
    int frames[MEMORY_SIZE / FRAME_SIZE]; // Memory divided into frames

    // Initialize the page table with some frame numbers
    page_table[0] = 3; // Page 0 is stored in Frame 3
    page_table[1] = 1; // Page 1 is stored in Frame 1
    page_table[2] = 4; // Page 2 is stored in Frame 4
    page_table[3] = 2; // Page 3 is stored in Frame 2

    printf("Enter a logical address (0 to %d): ", MEMORY_SIZE - 1);
    scanf("%d", &logical_address);

    // Calculate the page number and offset
    page_number = logical_address / PAGE_SIZE;
    offset = logical_address % PAGE_SIZE;

    // Get the frame number from the page table
    frame_number = page_table[page_number];

    // Calculate the physical address
    physical_address = frame_number * FRAME_SIZE + offset;

    // Display the results
    printf("Logical Address: %d\n", logical_address);
    printf("Page Number: %d\n", page_number);
    printf("Offset: %d\n", offset);
    printf("Frame Number: %d\n", frame_number);
    printf("Physical Address: %d\n", physical_address);

    return 0;
}

