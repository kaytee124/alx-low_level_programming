#include <stdio.h>

/**
 * main - Prints the sum of Even fibonacci numbers less than 4000000
 *
 * Return: void
 */

int main(void)
{
	long j = 1, k = 2, sum = 2, check;

	while (k <= 4000000)
	{
		check = k + j;
		j = k;
		k = check;
		if (k % 2 == 0)
		{
			sum += k;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
