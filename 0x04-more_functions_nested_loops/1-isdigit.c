#include "main.h"

/**
 * _isdigit - 'Checks whether the input is a number'
 * @c: Parameter passed into function
 *
 * Return: 1 if digit and 0 if not.
 */
int _isdigit(int c)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d == c)
		{
			return (1);
		}
	}
	return (0);
}

