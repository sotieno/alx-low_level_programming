#include "main.h"

/**
 * print_last_digit - Function prints last digit of a number
 *
 * @x: the number to be checked
 *
 * Return: last digit of number
 */

int print_last_digit(int x)
{
	int last = x % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar(last + '0');
	return (last);
}
