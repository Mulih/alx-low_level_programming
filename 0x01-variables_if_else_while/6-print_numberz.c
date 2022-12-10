#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all single digit numbers of base 10.
 *
 * Return: 0
 */
int main(void)
{
	int ch = 'i';

	for (ch = 0; ch <= 10; ch++)
	{
		while (ch == 0 && ch <= 10)
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
