#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string
 * Return:  returns the length of a strin
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	return (count);
}
