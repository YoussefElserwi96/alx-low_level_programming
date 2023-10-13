#include "main.h"
#include <stdio.h>

/**
* print_number - nested loop aimed to print an integer.
* @number2: The integer that is to be printed.
*/
void print_number(int number2)
{
	unsigned int number1 = number2;

	if (number2 < 0)
	{
		number2 *= -1;
		number1 = number2;
		_putchar('-');
	}

	number1 /= 10;

	if (number1 != 0)
		print_number(number1);

	_putchar((unsigned int) number2 % 10 + '0');

}
