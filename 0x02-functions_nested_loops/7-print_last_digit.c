#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @a: The int to print
 * Return: Always 0
 */

int print_last_digit (int a)
{
	int last_digit;

	if (a < 0)
	{
		last digit = (-1 * (a % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (a % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
