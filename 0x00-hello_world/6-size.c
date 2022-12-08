#include <stdio.h>
/**
 * main - print out the size of various data types in C
 *
 * Return: 0
*/
int main(void)
{
	char p;
	int x;
	long int y;
	long long int z;
	float f;

	printf("Size of a char: %lu byte(s)\n", p);
	printf("Size of an int: %lu byte(s)\n", x);
	printf("Size of a long int: %lu byte(s)\n", y);
	printf("Size of a long long int: %lu byte(s)\n", z);
	printf("Size of a float: %lu byte(s)\n", f);
	Return (0);
}
