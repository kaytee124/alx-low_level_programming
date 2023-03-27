#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabets in lowercase and upeercase'
 * Return: always 0 (success)
 */
int main(void)
{
	int counter = 'a';
	int count = 'A';

	while (counter <= 'z')
	{
		putchar(counter);
		counter++;
	}
	while (count <= 'Z')
	{
		putchar(count);
		count++;
	}
	putchar('\n');
	return (0);
}
