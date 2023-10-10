#include "main.h"

/**
 * print_times_table - Prints the n times tables
 * @mnum: number times table
 *
 * Return: no return
 */
void print_times_table(int mnum)
{
	int rows, coloms, result;

	if (mnum >= 0 && mnum <= 15)
	{
		for (rows = 0; rows <= mnum; rows++)
		{
			_putchar(48);
			for (coloms = 1; coloms <= mnum; coloms++)
			{
				result = rows * coloms;
				_putchar(44);
				_putchar(32);
				if (result <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(result + 48);
				}
				else if (result <= 99)
				{
					_putchar(32);
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
				else
				{
					_putchar(((result / 100) % 10) + 48);
					_putchar(((result / 10) % 10) + 48);
					_putchar((result % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
