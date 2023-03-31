#include <stdio.h>
/**
 * natural - "prints the sum of all multiples of 3 or 5 under 1024"
 *
 * Return:void
 */
void natural(void)
{
	int i, sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += 1;
		}
		i++;
	}
	printf("%d\n", sum);
}
