#include "main.h"

/**
 *  positive_or_negative - check if given number is positive or negative
 *
 *  @i: number to be checked
 * 
 *
 *  Return: nothing
 *
 */
void positive_or_negative(int i)
{
       	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}