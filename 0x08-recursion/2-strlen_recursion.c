#include "main.h"

/**
 * _strlen_reclusion - returns length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_reclusion(s + 1));
	}
	else
	{
		return (0);
	}
