#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char char1;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	for (char1 = 'a'; char1 <= 'f'; char1++)
	{
		putchar(char1);
	}
	putchar('\n');
	return (0);
}
