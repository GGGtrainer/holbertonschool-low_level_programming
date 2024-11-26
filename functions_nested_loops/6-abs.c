#include "main.h"

/**
  * _abs - Computes the absoulute value of an integer.
  *
  * @c: the value to be checked.
  *
  * Return: absolute value of number or zero.
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
