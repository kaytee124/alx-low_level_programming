#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabets in reverse lowercase'
 * Return: always 0 (success)
 */
int main(void)
{
	int counter = 'z';

	while (counter >=  'a')
	{
		putchar(counter);
		counter--;
	}
	putchar('\n');

	return (0);
}
