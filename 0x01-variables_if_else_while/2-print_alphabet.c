#include <stdio.h>

/**
 * main - entry point
 * description: prints alhphabet from a to z
 * Return: 0 Always (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
