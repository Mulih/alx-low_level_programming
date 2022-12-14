#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase ten times.
 *
 * Return: nothing
 *
 */
void print_alphabet_x10(void)
{
	int start = 97, stop = 122, count = 1;

	while (count <= 10)
	{
		while (start <= stop)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');

		start = 97;
		count++;
	}
}
