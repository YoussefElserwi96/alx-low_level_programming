#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: string thatll get encoded
 * Return: the results of enocding
 */

char *rot13(char *s)
{
	int i, j;
	char iput[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char oput[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 54; j++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
			&& s[i] == iput[j])
			{
				s[i] = oput[j];
				break;
			}
		}
	}
	return (s);
}
