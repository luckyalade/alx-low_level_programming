#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int g, w;

	for (w = 0 ; w < 10 ; w++)
	{
		_putchar('0');
		for (g = 1 ; g < 10 ; g++)
		{
			int sum = g * w;

			_putchar(',');
			if (sum / 100 == 0)
			{
				_putchar(32);
			}
			if (sum / 10 == 0)
			{
				_putchar(32);
			}
			else
			{
				_putchar('0' + (sum / 10));
			}
			if (sum % 10 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('0' + (sum % 10));
			}
		}
		_putchar('\n');
	}
}


