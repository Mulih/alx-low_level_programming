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

	while (a < b)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
