#include <stdio.h>
#include <stdlib.h>
/**
 * main - Print all possible combination of single digit numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	int n;

	n = (0);

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
