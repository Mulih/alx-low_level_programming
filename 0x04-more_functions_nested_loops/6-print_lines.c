#include "main.h"

/**
 * print_line - draws a straight line
 *
 * @n: numberof times character to be print
 *
 * Return: nothing
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar(' ');

		c++;
	}
	_putchar('\n');
}
