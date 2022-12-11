#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible different combinations of three digits.
 *
 * Return: 0
 *
 */
int main(void)
{
	int m, n, o;

	for (m = 0; m < 8; m++)
	{
		for (n = m + 1; n < 9; n++)
		{
			for (o = n + 1; o < 10; o++)
			{
				if (m != n && m != 0 && n != o)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(o + '0');
					if (m + n + o < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

