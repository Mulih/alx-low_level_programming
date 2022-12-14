#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 *
 */
void times_table(void)
{
	int a = 0, b = 9, count = 0;

	while (count <= 9)
	{
		while (a <= b)
		{
			int times = count * a;

			if (a != 0)
			{
				_putchar(',');
				if (times < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}

			if (times < 10)
				_putchar(times + '0');
			else
			{
				_putchar(times / 10 + '0');
				_putchar(times % 10 + '0');
			}

			if (a == b)
				_putchar('\n');
			a++;
		}
		a = 0;
		count++;
	}
}
