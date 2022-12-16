#include <stddio.h>

/**
 * main - print FizzBuzz
 *
 * Return: 0
 */
int main(voi)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (1 % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 ++ 0)
			printf("Buzzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
