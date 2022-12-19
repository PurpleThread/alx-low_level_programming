#include "main.h"
#include <stdio>

/**
 * swap_int - swaps values of two integers
 *
 * @a: A pointer to int that will be updated
 * @b: A pointer to an int that will be updated
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
