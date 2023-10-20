#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer.
 * @b: the buffer
 * @size: size of it
 * Return: void.
 */

void print_buffer(char *b, int size)
{
	int ot, j, i;

	ot = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (ot < size)
	{
		j = size - ot < 10 ? size - ot : 10;
		printf("%08x: ", ot);

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + ot + i));
			else
				printf("  ");

			if (i % 2)
			{
				printf(" ");
			}
		}

		for (i = 0; i < j; i++)
		{
			int character = *(b + ot + i);

			if (character < 32 || character > 126)
			{
				character = '.';
			}
			printf("%c", character);
		}
		printf("\n");
		ot += 10;
	}
}
