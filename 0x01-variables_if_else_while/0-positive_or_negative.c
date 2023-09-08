#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 *
 * main that program gives number p or n
 */
int main(void){
int n;
srand(time(0));
n = rand() % (2 * RAND_MAX + 1) - RAND_MAX;
printf("the number %d ", n)
if (n > 0){
printf("positive")
} else if ( n == 0) {
printf("is zero")
}else{
printf("is negative");
}
printf("\n");
return (0);
}
