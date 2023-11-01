#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that
 * concatenates all the arguments of your program.
 * @ac: arg count.
 * @av: arg vector.
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *cout;
	int c, i, j, ka;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	cout = malloc((c + 1) * sizeof(char));

	if (cout == NULL)
	{
		free(cout);
		return (NULL);
	}

	for (i = j = ka = 0; ka < c; j++, ka++)
	{
		if (av[i][j] == '\0')
		{
			cout[ka] = '\n';
			i++;
			ka++;
			j = 0;
		}
		if (ka < c - 1)
			cout[ka] = av[i][j];
	}
	cout[ka] = '\0';

	return (cout);
}
