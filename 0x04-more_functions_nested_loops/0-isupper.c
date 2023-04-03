#include "main.h"

/**
 * _isupper - 'Checks whether the input is uppercase'
 * @c: Parameter passed into function
 *
 * Return: 1 if upper and 0 if not.
 */
int _isupper(int c)
{
	int d;

	for (d = 'A'; d <= 'Z'; d++)
	{
		if (d == c)
		{
			return (1);
		}
	}
	return (0);
}

