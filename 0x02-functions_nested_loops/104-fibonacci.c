#include <stdio.h>

/**
 * main - entry point
 * description: finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int num1, bol1, bol2;
	long int ln1, ln2, ln3, ln4, ln5, ln6;

	ln1 = 1;
	ln2 = 2;
	bol1 =  bol2 = 1;
	printf("%ld, %ld", ln1, ln2);
	for (num1 = 0; num1 < 96; num1++)
	{
		if (bol1)
		{
			ln3 = ln1 + ln2;
			printf(", %ld", ln3);
			ln1 = ln2;
			ln2 = ln3;
		}
		else
		{
			if (bol2)
			{
				ln5 = ln1 % 1000000000;
				ln6 = ln2 % 1000000000;
				ln1 = ln1 / 1000000000;
				ln2 = ln2 / 1000000000;
				bol2 = 0;
			}
			ln4 = (ln5 + ln6);
			ln3 = ln1 + ln2 + (ln4 / 1000000000);
			printf(", %ld", ln3);
			printf("%ld", ln4 % 1000000000);
			ln1 = ln2;
			ln5 = ln6;
			ln2 = ln3;
			ln6 = (ln4 % 1000000000);
		}
		if (((ln1 + ln2) < 0) && bol1 == 1)
			bol1 = 0;
	}
	printf("\n");
	return (0);
}
