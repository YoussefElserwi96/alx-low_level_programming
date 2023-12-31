#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: the destination
 * @src: the socurce
 * @n: bytes
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
