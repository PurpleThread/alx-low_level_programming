#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a string
 * @accept: a character
 * Return: Null if no byte found,  pointer otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
