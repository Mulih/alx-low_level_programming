#include "main.h"

/**
 * cap_string - capitaliazes all words of a string
 * @d: string parameter
 *
 * Return: capitalized version of string
 */
char *cap_string(char *d)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (d[a])
	{
		i = 0;

		while (i < len)
		{
			if ((a == 0 || d[a - 1] == spc[i]) && (d[a] >= 97 && d[a] <= 122))
				d[a] = d[a] - 32;
			i++;
		}
		a++;
	}
	return (d);
}
