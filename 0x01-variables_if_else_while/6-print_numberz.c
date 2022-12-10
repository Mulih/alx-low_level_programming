#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all single digit numbers of base 10.
 *
 * Return: 0
 */
int main(void)
{
	int num = 'n';

	int n = ('%d');

	for (n = 0; n <= 10; n++)
	{
		if (n < 10)
		{
			putchar(n);
		}
	}

	putchar('\n');
	return (0);
}
