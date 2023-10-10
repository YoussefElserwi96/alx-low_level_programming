#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @num : the int to check ASCII ref
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int num)
{

	switch (num)
	{
	case 0:
		_putchar('0');
		return (0);
	default:
		if (num > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (num < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('-');
			return ('/');
		}
	}
}
