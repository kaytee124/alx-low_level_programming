#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabets in lowercase'
 * Return: always 0 (success)
 */
int main(void)
{
	int counter = 'a';

	while (counter <= 'z')
	{
		putchar(counter);
		counter++;
	}
	putchar('\n');

	return (0);
}
