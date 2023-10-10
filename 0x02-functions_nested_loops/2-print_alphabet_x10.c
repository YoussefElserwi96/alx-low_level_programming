#include "main.h"

/**
 * print_alphabet_x10 - print lC alphbet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch_1;
	int i_1;

	i_1 = 0;

	while (i_1 < 10)
	{
		ch_1 = 'a';
		while (ch_1 <= 'z')
		{
			_putchar(ch_1);
			ch_1++;
		}
		_putchar('\n');
		i_1++;
	}
}
