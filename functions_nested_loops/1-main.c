#include "main.h"

void _putchar(const char *message)
{
	printf("%s\n", message);
}

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	printf("%c", ch);
	}
	printf("\n");
}
