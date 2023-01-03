#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: a pointer to the memory area to be filled.
 * @b: the character to fill the memory area.
 * @n: the number of bytes to be filled.
 *
 * Return: changed array with new value for for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
