#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Assign a random number to variable n each time it is executed
 * and print the last digit of the number stored in variable n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	y = n % 10;
	printf("Last digit of %d", n, y);
	if (y > 5)
		printf("greater than 5\n");
	else if (y == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);

}

