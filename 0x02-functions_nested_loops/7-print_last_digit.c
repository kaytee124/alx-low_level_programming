#include "main.h"

/**
 * print_last_digit -"Print last digit"
 * @last: intteger input
 *
 * Return: last digit
 */
int print_last_digit(int last)
{
	int n;

	if (last < 0)
	{
		last *= -1;
		n = last % 10;
		_putchar('0' + n);
		return (n);
	}
	n = last % 10;
	_putchar(n + '0');
	return (n);
}
