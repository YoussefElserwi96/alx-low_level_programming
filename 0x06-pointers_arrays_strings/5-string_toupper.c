#include "main.h"
/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @str: string to captilise
 * Return: capital letters string
*/

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] <= 'z' && str[index] >= 'a')
			str[index] -= 32;
	}
	return (str);
}
