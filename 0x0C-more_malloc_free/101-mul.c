#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checkining if it has non char dig
 * @s: string
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - for the errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a program that multiplies two positive numbers.
 * @argc: arguments count
 * @argv: arguments array
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *string_1, *string_2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	string_1 = argv[1], string_2 = argv[2];
	if (argc != 3 || !is_digit(string_1) || !is_digit(string_2))
		errors();
	len1 = _strlen(string_1);
	len2 = _strlen(string_2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = string_1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(string_2) - 1; len2 >= 0; len2--)
		{
			digit2 = string_2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
