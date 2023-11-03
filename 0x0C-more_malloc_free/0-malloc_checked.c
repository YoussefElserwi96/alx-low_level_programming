#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that
 * allocates memory using malloc.
 * @b: bytes.
 * Return: allocated memory.
 * if malloc fails,
 * the malloc_checked function should cause
 * normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
