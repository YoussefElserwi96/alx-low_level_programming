#include "main.h"

/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout.
 * @str: pointer to the string to print
 */


void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
