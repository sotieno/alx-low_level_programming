#include "main.h"

/**
 * print_sign - Function prints sign of a number
 *
 * @x: the number to be checked
 *
 * Return: 1 and prints + if x is greater than zero, 0 and prints 0
 * if x is zero, -1 and prints - if x is less than zero
 */

int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}


}
