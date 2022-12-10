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

	for (i = 0; i <= 10; i++)
	{
		i = 1;
		while (i != 10)
		{
			putchar(i);
			i++;
		}
	}
	
	putchar('\n');
	return (0);
}
