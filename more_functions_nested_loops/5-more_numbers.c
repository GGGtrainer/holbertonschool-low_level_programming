#include "main.h"
/**
 * more_numbers - Print the nums 10x, from 0 to 14.
 *
 * Return: void
 */
void more_numbers(void)
{
	char m, n;

	for (m = 0; m <= 9; ++m)
	{
		for (n = 0; n <= 14; ++n)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
