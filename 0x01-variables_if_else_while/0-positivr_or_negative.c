#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Desctiption: Get a random number and print number
 * and if it is positivr, negative, ot zero
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() _ RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
