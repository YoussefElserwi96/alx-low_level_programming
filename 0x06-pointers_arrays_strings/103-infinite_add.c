#include "main.h"

/**
 * rev_string - a func to reverse arrays
 * @str: the input string to reverse
 * Return: void
 */
void rev_string(char *str)
{
	int start = 0;
	int end = 0;
	char temp;

	while (*(str + end) != '\0')
	{
		end++;
	}
	end--;

	for (start = 0; start < end; start++, end--)
	{
		temp = *(str + start);
		*(str + start) = *(str + end);
		*(str + end) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of the 1st number to add
 * @n2: text representation of the 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = 0;
	int j = 0;
	int digits = 0;
	int value1 = 0;
	int value2 = 0;
	int temp_total = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || carry == 1)
	{
		if (i < 0)
			value1 = 0;
		else
			value1 = *(n1 + i) - '0';
		if (j < 0)
			value2 = 0;
		else
			value2 = *(n2 + j) - '0';
		temp_total = value1 + value2 + carry;
		if (temp_total >= 10)
			carry = 1;
		else
			carry = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_total % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
