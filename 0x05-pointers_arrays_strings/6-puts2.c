#include "main.h"

/**
 * puts2 - print one character out of two
 * start with first one
 * @str: input
 */

void puts2(char *str)
{
	int longi = 0;
	int s = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	s = longi - 1;
	for (n = 0; n <= s; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
