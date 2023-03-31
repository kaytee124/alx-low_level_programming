#include "main.h"

/**
 *_isalpha - returns 1 if uppercase or lower case
 *@c: The paramemter
 *
 * Return: 1 if lower or uppercase and 0 if other.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
