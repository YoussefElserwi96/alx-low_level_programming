#include "main.h"

/**
 * print_numbers - using a loop to print numbers from 0 - 9
 * and then followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		_putchar(number + '0');
	}

	_putchar('\n');
}
