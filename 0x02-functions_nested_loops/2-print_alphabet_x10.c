#include "main.h"

/**
 * print_alphabet_x10 - Function to print the alphabet ten times in lowercase
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
