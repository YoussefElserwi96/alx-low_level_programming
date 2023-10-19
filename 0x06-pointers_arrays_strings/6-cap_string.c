#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string.
 * @str: the str to modify
 * Return: the string in the capital form
*/

char *cap_string(char *str)
{
	char separators[] = ",\t;\n; .!?\"(){}";
	int n_w, i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		n_w = 0;

		if (i == 0)
		{
			n_w = 1;
		}
		else
		{
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (str[i - 1] == separators[j])
				{
					n_w = 1;
					break;
				}
			}
		}

		if (n_w == 1)
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
