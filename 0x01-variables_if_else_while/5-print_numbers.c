#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the numbers from 0-9'
 * Return: always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
