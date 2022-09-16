#include "main.h"

/**
 * print_triangle - prints a triangle
 * followed by a new line
 *
 * @n: the size of the triangle
 *
 * Return: void
 */

void print_triangle(int n)
{
	int i = 1, j;

	while (i <= n && n > 0)
	{
		j = 0;
		while (j < n - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
