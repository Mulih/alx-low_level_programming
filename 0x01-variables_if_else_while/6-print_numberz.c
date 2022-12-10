#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all single digit numbers of base 10.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i != 10)
		{
			putchar(i);
			i++;
		}
	}

	putchar('\n');
	return (0);
}
