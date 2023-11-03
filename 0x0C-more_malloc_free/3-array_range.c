#include "main.h"
#include <stdlib.h>
/**
 * array_range - a func that creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *arr_rng;
	int i;

	if (min > max)
		return (NULL);

	arr_rng = malloc(sizeof(*arr_rng) * ((max - min) + 1));

	if (arr_rng == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr_rng[i] = min;

	return (arr_rng);
}
