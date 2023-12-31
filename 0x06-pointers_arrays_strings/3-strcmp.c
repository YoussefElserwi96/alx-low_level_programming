#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: compared to s2
 * @s2: compared to s1
 * Return: 0 if matching, and not if not matched
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
