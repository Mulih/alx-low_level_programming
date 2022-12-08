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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
