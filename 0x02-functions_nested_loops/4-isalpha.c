#include "main.h"

/**
 * _isalpha - Function checks if character is letter, lowercase or uppercase
 *
 * @x: the character to be checked
 *
 * Return: 1 if character is a letter, lowercase or uppercase. 0 if otherwise
 */

int _isalpha(int x)
{
	if (((x >= 65) && (x <= 90)) || ((x >= 97) && (x <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
