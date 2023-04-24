#include "main.h"

/**
 * swap_int - " swaps the values of two integers".
 * @a: pointer parameter
 * @b: pointer paramter
 *
 */
void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}
