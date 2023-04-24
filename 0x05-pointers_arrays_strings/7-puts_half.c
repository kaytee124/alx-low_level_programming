#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int counter = 0, half, n;

	while (str[counter] != '\0')
	{
		counter++;
	}

	n = (counter / 2);

	if ((counter % 2) != 0)
	{
		n = (counter + 1) / 2;

	}

	for (half = n; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
