#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 *
 * @a: number which the absolute value is to be found
 *
 * Return: absolute value of an integer
 *
 */
int _abs(int a)
{
	if (a < 0)
		a *= -1;
	return (a);
}
