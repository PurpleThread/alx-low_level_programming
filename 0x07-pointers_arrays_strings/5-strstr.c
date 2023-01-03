#include "main.h"
/**
 * _strstr - finds first occurence of substring
 * @needle: substring
 * @haystack: string
 * Return: null if pointer not found, pointer otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	char *s, *t;

		while (*haystack != '\0')
		{
			s = haystack;
			t = needle;

			while (*haystack != '\0' && *t != '\0' && *haystack == *t)
			{
				haystack++;
				t++;
			}
			if (*t == '\0')
				return (s);
			haystack = s + 1;
		}
	return (0);
}
