#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: a character
 * @s: a string
 * Return: Null if charater not found, otherwise pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*declaring WHILE*/
	{
		if (*s == c)
		{
			return (s); /*return s*/
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0); /*returns null*/
}
