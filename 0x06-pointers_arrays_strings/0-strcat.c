#include "main.h"

/**
 * *_strcat - a func that concatenates two strings
 * @dest: string where src will be appended
 * @src: string to append to dest
 * Return: Pointer to the result
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = -1, src_index;

	for (src_index = 0; dest[src_index] != '\0'; src_index++)
	{
		dest_length++;
	}

	do {
		dest_length++;
		dest[dest_length] = src[src_index];
		src_index++;
	} while (src[src_index] != '\0');

	return dest;
}
