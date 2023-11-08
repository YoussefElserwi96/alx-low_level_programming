#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - ti add
 * @a: num1
 * @b: num 2
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - to substract
 * @a: min one
 * @b: min two
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - to multiply
 * @a: num1
 * @b: num 2
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - to divide
 * @a: num 1
 * @b: num 2
 * Return: reult
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modular
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
