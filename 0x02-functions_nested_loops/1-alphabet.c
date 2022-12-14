#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Return: nothing on success.
 *
 */
void print_alphabet(void)
{
	int start = 97, stop = 122;

	while (start <= stop)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}

