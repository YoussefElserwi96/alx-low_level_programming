#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table
 * starting with 0.
 * Return: the number of times
 */
void times_table(void)
{
	int v1, v2, result;

	for (v1 = 0; v1 < 10; v1++)
	{
		for (v2 = 0; v2 < 10; v2++)
		{
			result = v2 * v1;
			if (v2 == 0)
			{
				_putchar(result + '0');
			}

			if (result < 10 && v2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			} else if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
