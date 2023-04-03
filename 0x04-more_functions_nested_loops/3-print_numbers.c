#include "main.h"

/**
 * print_numbers - 'Prints numbers from 0-9'
 *
 * Return: void
 */
void print_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		_putchar('0' + d);
	}
	_putchar('\n');
}
