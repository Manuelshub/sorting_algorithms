#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using selection sort algorithm.
 * @array: the pointer to the first element of the array.
 * @size: the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, temp;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if ((size_t)min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
