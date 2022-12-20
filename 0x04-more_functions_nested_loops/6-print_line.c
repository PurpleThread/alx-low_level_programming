#include "main.h"

/**
 * print_line - draws a straight line in terminal
 *@n: number of times character will be printed
 * Return: void
 */
void print_line(int n)
{
	int lines;

	for (lines = 1; lines < = n; lines++)
	{
		_putchar('_');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}

