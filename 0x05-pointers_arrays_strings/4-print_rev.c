#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: pointer to the string to be printed
 */
void print_rev(char *s)
{
	int p = 0;

	while (s[p])
		p++;

	while (p--)
	{
		_putchar(s[p]);
	}

	_putchar('\n');

}
