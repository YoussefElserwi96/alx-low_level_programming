#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string
 * for any of a set of bytes.
 * @s: the string
 * @accept: the string with the bytes we need
 * Return: pointer to byte in string. or NULL if doesnt exist
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
