#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * bubble sort algorithm.
 * @array: the array of integers to be sorted.
 * @size: the size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
