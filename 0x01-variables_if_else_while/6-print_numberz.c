#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all single digit numbers of base 10.
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
