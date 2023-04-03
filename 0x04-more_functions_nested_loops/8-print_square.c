#include "main.h"

/**
 * print_square - Prints a square
 * @size: length of square
 *
 * Return: void
 */
void print_square(int size);
{
	int i;
	int count;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
