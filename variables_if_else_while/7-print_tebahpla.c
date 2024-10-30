#include <stdio.h>

/**
 * main - entry point
 * @main - C program to print alphabet z-a lowercase
 * Return: Always (0)
**/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; --ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
