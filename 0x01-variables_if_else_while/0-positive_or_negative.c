#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // Initialize the random number generator with the current time
    srand(time(0));

    // Generate a random number and store it in n
    n = rand() % (2 * RAND_MAX + 1) - RAND_MAX;

    // Print the generated number
    printf("The number %d ", n);

    // Check if the number is positive, zero, or negative
    if (n > 0) {
        printf("is positive");
    } else if (n == 0) {
        printf("is zero");
    } else {
        printf("is negative");
    }

    // Print a new line
    printf("\n");

    return 0;
}
