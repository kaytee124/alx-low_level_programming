#include "main.h"

/**
 * more_numbers- 'Prints from 0 - 14,  10 times'
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
