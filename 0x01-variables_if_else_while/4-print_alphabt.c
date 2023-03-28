#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabets in lowercase without q and e'
 * Return: always 0 (success)
 */
int main(void)
{
	int counter = 'a';

	while (counter <= 'z')
	{
		if (counter == 'q' || counter == 'e')
		{
			counter++;
		}
		putchar(counter);
		counter++;
	}
	putchar('\n');
	return (0);
}
