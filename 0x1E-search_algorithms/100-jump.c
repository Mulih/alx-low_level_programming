#include "search_algos.h"


/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: If value is not present in array or if array is NULL, return -1
 * 	Otherwise, the first index where the value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_step, prev, curr;
	if (array == NULL)
		return -1;

	jump_step = sqrt(size);

	prev = 0;
	curr = jump_step;


	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += jump_step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
	while (prev <= curr && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
		{
			return prev;
		}
		prev++;
	}

	return (-1);
}
