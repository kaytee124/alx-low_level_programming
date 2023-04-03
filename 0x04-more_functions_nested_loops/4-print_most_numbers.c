#include "main.h"

/**
 * print_most_numbers - 'Prints numbers from 0-9 except 2 and 4'
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		if (d != 2 || d != 4)
		{
			_putchar(d + '0');
		}
	}
	_putchar('\n');
}
