#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints the alphabet in lowercase, and then uppercase
 *
 * Return: (0)
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n');
	return (0);
}
