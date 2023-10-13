#include "main.h"

/**
 * print_square - a loops to print a square
 * @size: is the meassurment of the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int horizontal, vertical;

		for (horizontal = 0; horizontal < size; horizontal++)
		{
			for (vertical = 0; vertical < size; vertical++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
