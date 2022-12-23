#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @d: param d
 * Return: a string
 */
char *leet(char *d)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (d[a])
	{
		b = 0;

		while (b < l)
		{
			if (d[a] == tr[b] || d[a] - 32 == tr[b])
				d[a] = trw[b];
			b++;
		}
		a++;
	}
	return (d);
}

