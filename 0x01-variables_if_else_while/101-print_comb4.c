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
	int third;

	for (num = 48; num  < 58; num++)
	{
		for (count = 49; count < 58; count++)
		{
			for (third = 50; third < 58; third++)
			{
				if (num < count && count < third)
				{
					putchar(num);
					putchar(count);
					putchar(third);
					if (num == 55 && count == 56 && third == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

