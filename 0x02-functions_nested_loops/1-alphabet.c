#include "main.h"

/**
 * print_alphabet - entry point. printing from a to z
 * Return: 0 Always (success)
 */

void print_alphabet(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		_putchar(A);
		A++;

	}
	_putchar('\n');

}
