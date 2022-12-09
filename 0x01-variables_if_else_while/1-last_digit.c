#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print random numbers with string.
 *
 * Return: (0)
 *
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = (n % 10);
	printf("last digit of %d is %d\n", n, x);
	if (x > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, x);
	}
	if (x == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, x);
	}
	if (x < 6 && x != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, x);
			return (0);
}
