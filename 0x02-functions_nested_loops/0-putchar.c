#include <stdio.h>

/**
 *main - entry point
 *Description: printing _putchar utilising prototype
 *Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
		_putchar('\n');

		return (0);
}
