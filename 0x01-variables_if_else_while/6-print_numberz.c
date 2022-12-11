#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints all single digit numbers of base 10.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 0;

	for (n = 0; n < 10; n++)
	{
		if (n != 10)
		{
			putchar(n + '0');
		}
	}
	putchar('\n');
	return (0);
}
