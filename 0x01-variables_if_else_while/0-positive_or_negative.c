#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -  assigning number to "n" using if loop
 *
 *Description : printing a random number to "n"
 *
 * Return: (0) Always succsess
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative \n", n);
	return (0);
}
