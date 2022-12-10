#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all single digit numbers of base 10.
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 10;

	for (a = 0; a < b; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
