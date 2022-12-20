#include <stdio.h>

/**
 * main - prints all possible passwords
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b=a; b < 58; b++)
		{
			for (c = b; c < 58; c++)
			{
				if (a == b || b == c || a == c)
				{
					continue;
				}
				putchar(a);
				putchar(b);
				putchar(c);
				
				if (a == 55 && b == 56 && c == 57)
				{
					break;
				}
				
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
