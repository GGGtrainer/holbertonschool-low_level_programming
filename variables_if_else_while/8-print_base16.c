#include <stdio.h>
/**
  *main - prints numbers of base 16 in lowercase
  *Return: 0
**/
int main(void)
{
	int h;
	char ch;

	for (h = 0; h < 10; h++)
	{
		putchar((h % 10) + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
