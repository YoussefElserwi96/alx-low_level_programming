#include "main.h"

/**
 * print_line - a loop to draw a  straight line in the terminal
 * following by a new line
 * @n_lines: will be number of times the character '_' should be printed
 */

void print_line(int n_lines)
{
	while (n_lines-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
