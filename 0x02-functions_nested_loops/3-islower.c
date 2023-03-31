#include "main.h"

/**
 * _islower - 'Checks whether the input is lowercase'
 * @c: Parameter passed into function
 *
 * Return: 1 if lowercase and 0 if not.
 */
int _islower(int c)
{
	int d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d == c)
		{
			return (1);
		}
	}
	return (0);
}

