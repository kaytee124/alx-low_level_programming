#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 *
 */
void print_rev(char *s)
{
	int reversecount;
	int count;

	for (reversecount = 0; *s != '\0'; reversecount++)
	{
		s++;
	}
	s--;
	count = reversecount;

	while (count > 0)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar('\n');
}
