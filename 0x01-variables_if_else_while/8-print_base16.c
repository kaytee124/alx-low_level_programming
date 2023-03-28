#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabets in reverse lowercase'
 * Return: always 0 (success)
 */
int main(void)
{
	int number = 0;
	int alpha = 'a';

	while (number < 10)
	{
		putchar(number);
		number++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
