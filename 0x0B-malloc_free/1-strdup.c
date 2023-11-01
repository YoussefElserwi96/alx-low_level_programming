#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - a function that returns
 * a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *chr;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	chr = malloc(sizeof(char) * (len + 1));

	if (chr == NULL)
		return (NULL);

	while ((chr[i] = str[i]) != '\0')
		i++;

	return (chr);
}
