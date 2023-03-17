#include <stdio.h>

/**
 * main - main point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a'

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			puthar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
