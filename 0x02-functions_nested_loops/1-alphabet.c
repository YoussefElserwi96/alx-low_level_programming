#include "main.h"

/*
* main - entry point
* Description : print the alhpabet
* Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
