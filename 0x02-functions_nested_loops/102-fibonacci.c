#include <stdio.h>

/**
 * main - entry point
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0 Always (success)
 */
int main(void)
{
	int c;
	long int ln1, ln2, fln;

	ln1 = 1;
	ln2 = 2;
	printf("%ld, %ld", ln1, ln2);
	for (c = 0; c < 48; c++)
	{
		fln = ln1 + ln2;
		printf(", %ld", fln);
		ln1 = ln2;
		ln2 = fln;
	}
	printf("\n");
	return (0);

}
