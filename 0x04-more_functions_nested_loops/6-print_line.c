#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * followed by a newline
 *
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{

	int x = 0;

	while (x < n && n > 0)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
