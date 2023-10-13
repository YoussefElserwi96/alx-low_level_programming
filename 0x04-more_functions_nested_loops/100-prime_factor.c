#include <stdio.h>

/**
 * main - finding printing the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int t_n = 612852475143;
	long int prime_f;

	for (prime_f = 2; prime_f < t_n; prime_f++)
	{
		if (t_n % prime_f == 0)
		{
			t_n = t_n / prime_f;
		}
	}
	printf("%ld\n", prime_f);
	return (0);
}
