#include <stdlib.h>
#include <time.h>

/**
 * main - Prints value of n
 *
 *Return: 0 when main function executes successfully
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* IF...ELSE and ELSE...IF statement */
	if( n > 0 )
		printf("%d is positive\n", n);
	else if ( n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
