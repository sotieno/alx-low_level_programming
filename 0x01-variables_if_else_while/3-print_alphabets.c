#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: 0 when main function executes successfully
 */

int main(void)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
	}

	for (j = 0; j < 26; j++)
	{
		putchar(upper[j]);
	}

	putchar('\n');
return (0);

}
