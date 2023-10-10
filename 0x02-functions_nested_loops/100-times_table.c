/**
 * print_times_table - print times table starting from 0
 */

void print_times_table(int givenNumber)
{
	int rows, coloms, sum;

	if (givenNumber < 0 || givenNumber > 15)
		return;

	for (rows = 0; rows <= givenNumber; rows++)
	{
		for (coloms = 0; coloms <= givenNumber; coloms++)
		{
			sum = rows * coloms;

			if (coloms == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (sum < 10)
					_putchar(' ');
				if (sum < 100)
					_putchar(' ');

				if (sum >= 100)
					_putchar(sum / 100 + '0');
				if (sum >= 10)
					_putchar((sum / 10) % 10 + '0');

				_putchar(sum % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
