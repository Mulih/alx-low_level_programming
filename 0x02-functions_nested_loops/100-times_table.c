#include "main.h"
/**
 * print_times_table - print the n times table, starting with 0.
 *
 * @n: numer whose times table is to be printed.
 *
 * Return: nothing.
 *
 */
void print_times_table(int n)
{
	int a = 0, b = n, count = 0;
	{
		while (count <= n)
		{
			while (a <= b)
			{
				int times = count * a;

				if (a != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
			if (times < 15)
				_putchar(times + '0');
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
			if (a >= b)
				_putchar('\n');
			a++;
		}
		a = 0;
		count a++;
	}
}
