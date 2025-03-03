#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer to the string
 * return: void
 */

void rev_string(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	for (b -= 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
