#include "main.h"

/**
 * more_numbers - print ten times the numbers, fomt 0 to 14.
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int a, b;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar('1');
			__putchar(j  % 10 + '0');
		}
		_putchar('\n');
	}
}

