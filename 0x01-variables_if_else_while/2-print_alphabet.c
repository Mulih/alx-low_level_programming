#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 *  Return: (0)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <  'z'; i++)
		putchar("%c", i);

	putchar("\n");
	return (0);
}
