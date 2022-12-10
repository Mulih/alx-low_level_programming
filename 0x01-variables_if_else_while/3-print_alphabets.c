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
	int ch = 'a';
	int c = 'A';

	/**
	 * putchar("lowercase characters")
	 */
	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	/**
	 * putchar("uppercase letters")
	 */
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
