#include "main.h"
#include <stdio.h>

/**
 * print_times_table - "Prints the n times table"
 * @n: parameter
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, a, result;

	if (n > 0 || n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (a = 0; a <= n; a++)
			{
				result = i * a;
				printf("%d", result);
				if ( a < n)
				{
					printf(",");
					printf(" ");
				}				
			}
			printf("\n");
		}
	}
}
