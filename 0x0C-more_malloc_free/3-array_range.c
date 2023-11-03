#include "main.h"
#include <stdio.h>

/**
 * array_range - a function that
 * creates an array of integers.
 * @min: minmum
 * @max: maximum
 * Return: the array of ints
 */

int *array_range(int min, int max)
{
	int *array_rng;
	int i;

	if (min > max)
		return (NULL);

	array_rng = malloc(sizeof(*array_rng) * ((max - min) + 1));

	if (array_rng == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array_rng[i] = min;

	return (array_rng);
}
