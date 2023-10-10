#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int min1, min2;

	min1 = 0;

	while (min1 < 24)
	{
		min2 = 0;
		while (min2 < 60)
		{
			_putchar((min1 / 10) + '0');
			_putchar((min1 % 10) + '0');
			_putchar(':');
			_putchar((min2 / 10) + '0');
			_putchar((min2 % 10) + '0');
			_putchar('\n');
			min2++;
		}
		min1++;
	}
}
