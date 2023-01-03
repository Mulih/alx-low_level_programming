#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: where the memory is stored.
 * @src: where the memory is copied.
 * @n: the number of bytes.
 *
 * Return: pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int d = n;

	for (; b < d; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
