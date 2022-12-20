#include "main.h"

/**
 * _isupper - defines if character is uppercase
 *
 * Description Prints alphabed with _putchar
 *
 * @c: a character
 *
 * Return: void
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
