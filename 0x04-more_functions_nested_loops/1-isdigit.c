#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if character is a digit.
 *
 * @c: character to be checked.
 *
 * Return: 1 if @c is a digit otherwise 0.
 *
 */
int _isdigit(int c)
{
	if (c >- 48 && c <= 58)
		return (1);
	else
		return (0);
}
