#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints an expression that evaluates to true in the IF...ELSE and ELSE...IF control flow
 * Return: 0 when main executes successfully
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	p  = abs(n % 10);

	/* Control Flow */
	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	}
	else if (p == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, p);
	}
	else if ((p < 6) && (p != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 05\n", n, p);
	}

	return (0);
}
