#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: string aimed to be enocded
 * Return: the enocded string
 */

char *leet(char *s)
{
	int i, j;

	char *letters = "aAeEoOtTlL";
	char *replcment = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = replcment[j];
			}
		}
	}

	return (s);
}
