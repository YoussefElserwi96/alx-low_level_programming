#include "main.h"

/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: whatll be reversed
 * @n: array length / elemnts
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int start, end, temp;

	end = n - 1;

	for (start = 0; start < n / 2; start++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end--] = temp;
	}
}
