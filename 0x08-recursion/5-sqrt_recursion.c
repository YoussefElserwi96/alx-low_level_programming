#include "main.h"

/**
 * _sqrt_recursion -  function that returns
 * the natural square root of a number.
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - square root
 * @n: number to find square root
 * @val: square root
 * Return: the muber
 */

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return  (square(n, val + 1));
	else
		return (-1);

}
