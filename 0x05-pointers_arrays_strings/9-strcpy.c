#include "main.h"

/**
 * *_strcpy - copies a string
 *
 * @*src: A pointer for the string to be written
 * @*dest: A pointer for the destination of the string to be written
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char i, j;

	for (i = 0, i <= j && *src[i] != '\0';)
		i++;
	*dest[i] = *src[i];
	for ( ; i < j, i++; )
		*dest[i] = '\0';
	return (*dest);
}


