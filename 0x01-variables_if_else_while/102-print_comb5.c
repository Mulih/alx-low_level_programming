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
	int n1, n2;
	int a, b, c, d;

	for (n1 = 0; n1 <= 99; n1++)
	{
		a = n1 / 10;
		b = n1 % 10;

		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			c = n2 / 10;
			d = n2 % 10;
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');

			if (a < d || (a == c && b < d))
			{
				putchar(c + '0');
				putchar(d + '0');

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
