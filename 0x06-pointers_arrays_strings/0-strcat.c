#include "main.h"

/**
 * _strcat - a func that concatenates two strings
 * @dest: string where src will be appended
 * @src: string to append to dest
 * Return: Pointer to the result
 */

char *_strcat(char *dest, char *src)
{
int d_length = -1, s_index;
for (s_index = 0; dest[s_index] != '\0'; s_index++)
;

do {
	d_length++;
	dest[s_index] = src[d_length];
	s_index++;
} while (src[d_length] != '\0');

return (dest);
}
