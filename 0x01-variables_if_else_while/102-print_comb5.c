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

	for (num = 0; num  < 100; num++)
	{
		for (count = 1; count < 100; count++)
		{
			if (num < count && num != count)
			{
				putchar((num/10)+ '0');
				putchar((num%10)+ '0');
				putchar(' ');
				putchar((count/10)+ '0');
				putchar((count%10)+ '0');
				if (num == 98 && count == 99)
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

