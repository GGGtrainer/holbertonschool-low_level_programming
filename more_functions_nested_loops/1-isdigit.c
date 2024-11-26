#include "main.h"

/**
 * _isdigit - checks if a character is an int
 * @c - character to check
 * Return: 1 if int, 0 otherwise
**/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
