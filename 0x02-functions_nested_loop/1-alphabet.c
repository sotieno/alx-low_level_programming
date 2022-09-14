#include "main.h"

/**
 * main - Print _putchar followed by a new line.
 * Return: 0 if main executes successfully
 */

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
    char str[26] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < 26; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
