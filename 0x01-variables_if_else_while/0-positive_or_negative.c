#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Print ranom number and state whether
 * positive, negative or zero
 *
 * return: Always 0
 */
int main (void)
{
	int n;
	srand(time(0));
	n=rand() -RAND_MAX / 2;

	if (n>0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else printf("%d is zeor\n", n);

	return (0);
}

