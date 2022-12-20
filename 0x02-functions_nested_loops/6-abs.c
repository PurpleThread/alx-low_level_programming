#include "main.h"

/**
 * _abs - computes absolute value of integer
 * @j: int to print
 * Return: 0
 */
int _abs(int j)
{
	if (j < 0)
	{
		return (j * (-1));
	}

	else if (j == 0)
	{
		return (0);
	}

	else
	{
		return (j);
	}
}
