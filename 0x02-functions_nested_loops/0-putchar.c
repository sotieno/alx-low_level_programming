#include "main.h"

/**
 * main - Print _putchar followed by a new line.
 * Return: 0 if main executes successfully
 */

int main(void)
{
	char str[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);

}
