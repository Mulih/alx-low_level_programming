#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @d:string parameter
 *
 * Return: a string
 */
char *string_toupper(char *d)
{
	int i = 0;

	while (d[i])
	{
		if (d[i] >= 97 && d[i] <= 122)
			d[i] = d[i] - 32;
		i++;
	}
	return (d);
}
