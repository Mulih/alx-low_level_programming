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

	/**
	 * putchar("lowercase characters")
	 */
	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar("%C", ch);
	}
	int ch = 'A';

	/**
	 * putchar("uppercase letters")
	 */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar("%c", ch);
	}
	putchar('\n');
	return (0);
}
