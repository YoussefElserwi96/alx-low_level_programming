#include <stdio.h>

/**
 * main - entry point
 * Description: prtining combinations of singl digits
 * Return: Always (0) Success
 * was hard.
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar('.');
			putchar('.');
		}
	}
	putchar('\n');
	return (0);
}
