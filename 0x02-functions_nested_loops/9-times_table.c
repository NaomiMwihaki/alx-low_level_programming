#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: 0
 */
void times_table(void)
{
	int c, r, m;

	for (c = 0; c <= 9; c++)
	{
		for (r = 0; r <= 9; r++)
		{
			m = c * r;
			if (r != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (m < 10)
				_putchar(' ');
			if (m >= 10)
				_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
