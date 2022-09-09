#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase except q & e\n
 * Return: 0 when main function executes successfully
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
return (0);

}
