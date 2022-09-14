#include "main.h"

/**
 * _islower - Function checks if character is lowercase
 *
 * @x: the character to be checked
 *
 * Return: 1 if character is lowercase and 0 otherwise
 */

int _islower(int x)
{
	if ((x >= 97) && (x <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
