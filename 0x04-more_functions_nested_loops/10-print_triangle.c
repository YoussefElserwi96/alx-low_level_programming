#include "main.h"

/**
 * print_triangle - nested loops to prints a triangle.
 * followed by a new line.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int height, width;

		for (height = 1; height <= size; height++)
		{
			for (width = height; width < size; width++)
			{
				_putchar(' ');
			}

			for (width = 1; width <= height; width++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
