#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints the single digit number in base 10
 * Return: 0 when main function executes successfully
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
putchar('\n');
return (0);

}
