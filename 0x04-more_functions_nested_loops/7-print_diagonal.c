#include "main.h"

/**
 * print_diagonal - Prints '\' n times
 * @n: paramter
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int count;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (i = 1; i <= count; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
