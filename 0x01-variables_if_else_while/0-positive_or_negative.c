#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - delermines if a number is positive, negative or zero
 *
 * Return: Always 0 (success)
 */
int main() 
{	
int n;

// Initialize the random number generator with the current time
srand(time(0));

// Generate a random number and store it in n

n = rand() - RAND_MAX / 2;

// Check if the number is positive, zero, or negative
if (n > 0) 
{	
printf("%d is positive\n". n);
}
{
else if (n == 0)
}	
printf("%d is zero\n". n);
} 
else 
{
printf("%d is negative\n". n);
}

// Print a new line
printf("\n");

return (0);
}
