#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, minus, n, counter, f, digit;

	i = 0;
	minus = 0;
	n = 0;
	f = 0;
	digit = 0;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		counter++;
	}

	for (i = 0; i < counter && f == 0; i++)
	{
		if (s[i] == '-')
		{
			minus++;
		}

		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (minus % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
	}

	if (f == 0)
		return (0);

	return (n);
}

