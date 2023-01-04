#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a destination string
 * @src: A string to append
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0, src[i] != '\0'; i++;)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
