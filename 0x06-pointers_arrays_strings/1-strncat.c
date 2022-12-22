#include "main.h"

/**
 **_strncat - concatenates two strings
 *@dest: a destination string
 *@src: a string
 *@n: an interger
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, 1;
	int i;

	for (i = '0', i < n && src[i] != '\0';  i++)
		dest[len + i] = src[i];
		dest[len + i] = '\0';
	
	
	return (dest);
}
