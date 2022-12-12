#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible combinations of two two digit numbers.
 *
 * Return: 0
 *
 */
int main(void)
{
	int a, b;
	int c, d, e, f;

	for (a = 0; a < 100; a++)
	{
		c = a / 10;
		b = a % 10;

		for (b = 0; b < 100; b++)
		{
			e = b / 10;
			f = b % 10;

			if (c < e || (c == e && d < f))
			{
				putchar(c + '0');
				putchar(d + '0');
				putchar(' ');
				putchar(e + '0');
				putchar(f + '0');

				if (!(c == 9 && d == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
