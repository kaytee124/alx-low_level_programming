#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char reverse = *s;
	int counter = 0;
	int i;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		continue;
	}
	counter--;
	for (i = 0; i < counter; i++, counter--)
	{
		reverse = *(s + i);
		*(s + i) = s[counter];
		*(s + counter) = reverse;
	}
}
