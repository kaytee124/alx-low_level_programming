#include "main.h"

/**
 * print_alphabet_x10 - 'Prints the alphabets 10 times'
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (i = 'a'; i < 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
