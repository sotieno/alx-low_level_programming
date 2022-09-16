#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * followed by a new line
 *
 * @n: the number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
