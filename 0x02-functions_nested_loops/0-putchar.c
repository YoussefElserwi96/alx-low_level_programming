#include <stdio.h>

/**
 *main - entry point
 *Description: printing _putchar utilising prototype
 *Return: Always 0 (success)
 */

int main(void)
{
	char putChar[] = "_putchar";
	int num;

	for (num = 0; num <= 7; num++)
	{
		putchar(putChar[num]);
	}
	
	putchar('\n');
	return (0);
}
