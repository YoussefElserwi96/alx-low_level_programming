#include <stdlib.h>
#include "main.h"

/**
 * count_word - a fucntion to help count the words -helper-
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow -  a function that splits
 * a string into words.
 * @str: string to split
 * Return: pointer to array of strings (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	char **mrx, *temp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mrx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mrx == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (start < end)
					*temp++ = str[start++];
				*temp = '\0';
				mrx[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	mrx[k] = NULL;

	return (mrx);
}
