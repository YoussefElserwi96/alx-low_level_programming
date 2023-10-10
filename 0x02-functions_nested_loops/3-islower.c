#include "main.h"

/**
 * _islower - checks for lowercase character
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int num)
{
	if (num > 96 && num < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
