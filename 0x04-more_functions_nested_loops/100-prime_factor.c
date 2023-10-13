#include <stdio.h>
#include <math.h>

/**
 * main - finding printing the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int PF;
	long number = 612852475143;

	for (PF = (int) sqrt(number); PF > 2; PF++)
	{
		if (number % PF == 0)
		{
			printf("%d\n", PF);
			break;
		}
	}

	return (0);
}
