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
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (((a + d) > (a + b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(44);
						putchar(c);
						putchar(d);

					if (a + b + c + d == 227 && a == 48)
					{
					break;
					}
					else
					{
						putchar(44);
						putchar(32);
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

