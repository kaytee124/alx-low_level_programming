#include <stdio.h>

/**
 * main - Prints the first 52 fibonacci number
 *
 * Return: void
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, next;

	while (i <= 50)
	{
		if (i == 0)
		{
			printf("%ld", j);
		}
		else if (i == 1)
		{
			printf(", %ld", k);
		}
		else
		{
			next = k + j;
			j = k;
			k = next;
			printf(", %ld", k);
			i++;
		}
	}
	printf("\n");
	return (0);
}
