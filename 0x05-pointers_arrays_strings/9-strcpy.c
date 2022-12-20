#include "main.h"

/**
 * *_strcpy - copies a string
 * @*src: A pointerto a char that will be copied
 * @*dest: A pointer to a char that will be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


