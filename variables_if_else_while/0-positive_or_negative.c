#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*file header means?? main?!*/

/**
 * main - printf
 * @main - positive negative or zero
 * Return: Always (0)
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero");
	}
	else if (n < 0)
	{
		printf("%d is negative");
	}
	else
	{
	printf("%d is positive");
	}
	return (0);
}
