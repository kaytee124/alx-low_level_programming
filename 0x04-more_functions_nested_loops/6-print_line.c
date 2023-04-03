#include "main.h"

/**
 * print_line - 'Print a line n times'
 * @n: input parameter
 *
 * Return: void
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
