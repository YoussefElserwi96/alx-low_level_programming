#include "main.h"
#include <stdio.h>

/**
 * infinite_add - a function that adds two numbers.
 * @n1: number one.
 * @n2: number two.
 * @r: will be used to store the result.
 * @size_r: buffer size.
 * Return: the pointer to destination.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, op, cr, d1, d2, add = 0;

	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;
	if (len1 >= len2)
		cr = len1;
	else
		cr = len2;
	if (size_r <= cr + 1)
		return (0);
	r[cr + 1] = '\0';
	len1--, len2--, size_r--;
	d1 = *(n1 + len1) - 48, d2 = *(n2 + len2) - 48;
	while (cr >= 0)
	{
		op = d1 + d2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(r + cr) = (op % 10) + 48;
		else
			*(r + cr) = '0';
		if (len1 > 0)
			len1--, d1 = *(n1 + len1) - 48;
		else
			d1 = 0;
		if (len2 > 0)
			len2--, d2 = *(n2 + len2) - 48;
		else
			d2 = 0;
		cr--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
