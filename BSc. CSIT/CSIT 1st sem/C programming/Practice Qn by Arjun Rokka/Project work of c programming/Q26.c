#include <stdio.h>
#include<stdlib.h>

int main() {
    int i, j, is_prime;
    
    for (i = 2; i <= 100; i++) {
        is_prime=1; // Assume i is prime until proven otherwise
        
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0; // i is not prime
            break;

            }
        }
        
        if (is_prime) {
            printf(" %d\n", i);
            // break; // Found the first prime number, exit the loop
        }
    }
    
    return 0;
}
