#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the numbers from 0-9'
 * Return: always 0 (success)
 */
int main(void)
{
	int num;
	int count;

	for (num = 48; num  < 58; num++)
	{
		for (count = 49; count < 58; count++)
		{
			if (num < count && num != count)
			{
				putchar(num);
				putchar(count);
				if (num == 56 && count == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

