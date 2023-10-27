#include "main.h"

/**
 * _atoi -  a func that converts a string to an integer.
 * @s: string to be converted
 * can be preceded by an infinite number of characters
 * If there are no numbers in the string, the function must return 0
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int index;
	int result = 0;
	int sign = -1;
	int digit_found = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == '-')
			sign = sign * -1;
		if (s[index] >= '0' && s[index] <= '9')
		{
			result = result * 10;
			result -= (s[index] - '0');
			digit_found = 1;
		}
		else if (digit_found == 1)
			break;
	}
	result = sign * result;
	return (result);
}
