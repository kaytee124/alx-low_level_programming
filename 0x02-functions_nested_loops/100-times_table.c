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
	int i, a, result, check;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
			for (a = 0; a <= n; a++)
				result = i * a;
				printf("%d", result);
				check = i * (a + 1);
				if (result != (n * n))
					if (a < n && result < 10 && !(check >= 1)0)
						printf(",");
						printf("   ");
					else if (a < n && result < 10 && check >= 10)
						printf(",");
						printf("  ");
					else if (a < n && result >= 10 && result < 100 && !(check >= 100))
						printf(",");
						printf("  ");
					else if (a < n && result >= 10 && result < 100 && check >= 100)
						printf(",");
						printf(" ");
					else if (a < n && result >= 100)
						printf(",");
						printf(" ");
			printf("\n");
}
