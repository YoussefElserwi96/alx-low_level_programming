#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: changed to be made onto data
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
