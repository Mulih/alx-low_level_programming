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
	int start = 0, stop = 9;

	while (start <= stop)
	{
		if (start != 2 && start != 4)
			_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
