#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9.
 *
 * Return: nothing.
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		_putchar("%c", i);
	}
	_putchar('\n');
}
