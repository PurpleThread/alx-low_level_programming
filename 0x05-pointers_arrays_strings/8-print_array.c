#include "main.h"
#include <stdio.h>

/**
 * print_array - prints arrays
 * @a: A pointer to an int that will be changed
 * @n: return value n
 * Return: void means correct
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;
	while (b < n)
	{
		printf("%d", a[b]);

		if (b < n - 1)
		{
			printf(",");
		}

		b++;
	}

	printf("\n");
}
