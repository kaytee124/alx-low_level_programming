#include <stdio.h>

/**
 * main - checks code
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count == 1)
		{
			printf("%d", count);
			printf(" ");
		}
		else if (count == 2)
		{
			printf("%d", count);
			printf(" ");
		}
		else if (count % 3 == 0 && count % 5 != 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (count % 5 == 0 && count % 3 != 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else
		{
			printf("%d", count);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
