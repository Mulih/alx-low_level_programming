#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible combintations of two digits.
 *
 * Return: 0
 *
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = n1 + 1; n2 <= 9; n1++)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			if (n1 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}


