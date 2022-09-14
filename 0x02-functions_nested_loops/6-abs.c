#include "main.h"

/**
 * _abs - Function prints absolute value of a number
 *
 * @x: the number to be checked
 *
 * Return: absolute value of number
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = x * -1;
		return (x);
	}
	else
	{
		return (x);
	}
}
