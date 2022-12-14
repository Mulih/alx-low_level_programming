#include "main.h"

/**
 * jack_bauer - print every minute of Jack Bauer's day, \
 starting from 0:00 to 23:59.
 *
 * return: nothing
 */
void jack_bauer(void)
{
	int a = 0, b = 23, a2 = 0, b2 = 59;

	while (a <= b)
	{
		while (a2 <= b2)
		{
			_putchar(a < 9 ? 0 + '0' : a / 10 + '0');
			_putchar(a < 9 ? a + '0' : a % 10 + '0');
			_putchar(':');
			_putchar(a2 < 9 ? 0 + '0' : a2 / 10 + '0');
			_putchar(a2 < 9 ? a2 + '0' : a2 % 10 + '0');
			_putchar('\n');

			a2++;
		}
		a2 = 0;
		a++;
	}
}
