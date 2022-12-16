#include "main.h"
#include<stdio.h>
/**
 * print_most_numbers - printsthe numbers, from 0 to 9
 * do not print 2 and 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a);
		}
	}
}
