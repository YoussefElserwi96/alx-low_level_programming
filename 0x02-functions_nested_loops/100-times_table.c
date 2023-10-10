/**
 * print_times_table - print times table starting from 0
 */

void print_times_table(int n)
{
	int row, colom, result;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (colom = 0; colom <= n; colom++)
			{
				result = colom * row;
				if (colom == 0)
				{
					_putchar(result + '0');
				} else if (result < 10 && colom != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				} else if (result >= 10 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				} else if (result >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
