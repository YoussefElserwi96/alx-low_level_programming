#include "main.h"

/**
 * _isalpha - checking alphabetic characters
 * @c: what need to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */

int print_sign(int num)
{
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
