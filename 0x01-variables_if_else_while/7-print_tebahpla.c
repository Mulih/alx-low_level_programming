#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the lowercase alphabet in reverse.
 *
 * REeturn: 0
 */
int main(void)
{
	int i;

	for (i = 'z'; i > 'a'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
