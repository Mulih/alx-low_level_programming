#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 *
 * Return: nothing.
 *
 */
void print_numbers(void)
{
	int start = 0, stop = 9;

	while (start <= stop)
	{
		_putchar(start + '0');
		start++;
	}
	_putchar('\n');
}
