#include "search_algos.h"

/**
* binary_search - search and the index of a value using binary search algorithm
* @array: the array to be searched
* @value: the value we are searching for
* @size: the size of the array
* Return: the index of the value on success and -1 on failure
**/

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t mid;
	size_t high = size - 1;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		mid = (high + low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i ==  high)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
	}
	return (-1);
}
