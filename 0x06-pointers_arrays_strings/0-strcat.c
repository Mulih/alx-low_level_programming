#include "main.h"

/**
 * *_stract - Concatenates two strings.
 * @dest: first parameters
 * @src: second parameters
 * Return: a character
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
