#include "main.h"
/**
* times_table -  a function that prints the 9 times table, starting with 0
* rone = row, cone = column, d = digits of current result
* Return: times table
* add extra space past single digit
*/
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			res = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}

