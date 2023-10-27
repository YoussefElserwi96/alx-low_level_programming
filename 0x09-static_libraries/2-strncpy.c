#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to the resulting string destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c_in;

	for (c_in = 0; c_in < n && src[c_in] != '\0'; c_in++)
		dest[c_in] = src[c_in];

	for ( ; c_in < n; c_in++)
		dest[c_in] = '\0';

	return (dest);
}
