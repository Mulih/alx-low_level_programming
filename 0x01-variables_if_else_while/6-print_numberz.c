#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all single digit numbers of base 10.
 *
 * Return: 0
 */
int main(void)
{
	int a;

	int b = 10;

	for (a = 0; a < b)
	{
		do {
			putchar(a);
			a++;
		} while (a < b);
	}

	putchar('\n');
	return (0);
}
