#include "main.h"
#include <stdio.h>

/**
 * print_array - a func that prints n elements of an array of integers.
 * followed by a new line
 * they must be separated by comma, followed by a space.
 * also should be displayed in the same order as they are stored in the array
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
