#include "search_algos.h"
/**
* linear_search - search an element in an array using linear search
* @array: the array to be search from
* @size: the size of the array
* @value: the we to search
* Return: return the index of the value if found; -1 if not found
**/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
