#include "main.h"

/*
* main - entry point
* Description : print the alhpabet
* Return: Always 0 (success)
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
