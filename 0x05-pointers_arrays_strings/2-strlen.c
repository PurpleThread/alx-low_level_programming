#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns length of string
 *
 * @s: A pointer to an int that will be updated/changed
 *
 * Return: void means correct
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
