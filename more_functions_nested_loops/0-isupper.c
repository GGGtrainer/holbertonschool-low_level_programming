#include "main.h"
/**
 * _isupperer - check for uppercase chars
 * @c: char to be checked
 *
 * Return: 1 if char is upper, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	else
		return (0);
