#include "main.h"
/**
 * rev_string - prints reversed string.
 * followed by a new line
 * @s: pointer to the string to print
*/

void rev_string(char *s)
{

	int len, i, half;
	char Ti;

	for (len = 0; s[len] != '\0'; len++)
	;

	i = 0;

	half = len / 2;

	while (half--)
	{
		Ti = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = Ti;
		i++;
	}

}
