#include "main.h"

/**
 * print_triangle - Print a triangle of height size
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, h;
	int count;
	int reminder = size;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (i = 1; i < reminder; i++)
			{
				_putchar(' ');
			}
			for (h = 0; h <= count; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
			reminder--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
