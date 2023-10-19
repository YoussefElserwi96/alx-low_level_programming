#include "main.h"
/**
 * _strncat - a function that concatenates n bytes of two strings
 * @dest: the pointer destination
 * @src: the pointer source
 * @n: number of bytes
 * Return: Return: the starting address of the concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int d_in, s_in;

	d_in = 0;
	s_in = 0;

	while (dest[d_in] != '\0')
		d_in++;

	while (src[s_in] != '\0' && s_in < n)
	{
		dest[d_in] = src[s_in];
		d_in++;
		s_in++;
	}

	dest[d_in] = '\0';

	return (dest);
}
