#include "main.h"

/**
 * _islower - check for lowercase
 * @c: the character to be checked
 * Return: 1 if character is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
