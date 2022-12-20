#include  "main.h"

/**
 * more_numbers - prints ten times numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int number;

	for (number = '0'; number >= '0' && number <= 14 ; number--)
	{
		_putchar(number * 10);
	}
	for ( ; number > 14; )
	{
		_putchar(' ');
	}
	_putchar('\n');
}
