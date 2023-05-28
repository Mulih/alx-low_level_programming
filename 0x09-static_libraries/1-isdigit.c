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
	int start = 48, stop = 57;

	if (c >= start && c <= stop)
		return (1);
	return (0);
}
