#include <stdio.h>

/**
 * main - prints the program name followed by a new line
 * @argc: Number of arguments supplied to the program
 * @argv: Array of pointers to the argument
 *
 * Return: Always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
