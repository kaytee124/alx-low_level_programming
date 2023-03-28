#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the numbers from 0-9'
 * Return: always 0 (success)
 */
int main(void)
{
	int num = 48;
	int count = 0;

	while (count < 10)
	{
		putchar(num);
		num++;
		count++;
	}
	putchar('\n');
	return (0);
}
