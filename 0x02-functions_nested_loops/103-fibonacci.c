#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int uli1, uli2, unlin3, res;

	uli1 = 1;
	uli2 = 2;
	res = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (uli1 < 4000000 && (uli1 % 2) == 0)
		{
			res = res + uli1;
		}
		unlin3 = uli1 + uli2;
		uli1 = uli2;
		uli2 = unlin3;
	}

	printf("%lu\n", res);

	return (0);
}
