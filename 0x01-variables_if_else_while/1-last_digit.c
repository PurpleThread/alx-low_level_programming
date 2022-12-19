#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Print the last digit of the number stored in variable n
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
	printf("Lastdigit of %d and is", n, y);
	if (y > 5)
		printf("greater than 5\n");
	else if (y == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);

}

