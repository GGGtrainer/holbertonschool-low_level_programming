#include "main.h"
/**
 * print_numbers - prints numbers from 0 - 9
 * @void
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
	return;
}
