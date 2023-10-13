#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal
 * line on the terminal.
 * from 0 to 14, followed by a new line.
 * @c_num: is the n of times the character should be printed
 */
void print_diagonal(int c_num)
{
	if (c_num <= 0)
	{
		_putchar('\n');
	} else
	{
		int num1, num2;

		for (num1 = 0; num1 < c_num; num1++)
		{
			for (num2 = 0; num2 < c_num; num2++)
			{
				if (num2 == num1)
					_putchar('\\');
				else if (num2 < num1)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
