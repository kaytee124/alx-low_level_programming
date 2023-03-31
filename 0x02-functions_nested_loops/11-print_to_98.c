#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - "Prints all natural numbers from n to 98")
 * @n: natural number
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98 || n >= 98 )
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}

