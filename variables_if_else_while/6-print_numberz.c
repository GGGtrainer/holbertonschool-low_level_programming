#include <stdio.h>

/**
 * main - entry point
 * @main - Print every single digit base 10 number
 * Return: Always 0
**/
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
