#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: 0 when main function executes successfully
 */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
return (0);

}
