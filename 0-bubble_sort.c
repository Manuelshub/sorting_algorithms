#include "sort.h"

/**
 * swap_int - Swaps two integers.
 * @num1: the first integer
 * @num2: the second integer
 */
void swap_int(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * bubble sort algorithm.
 * @array: the array of integers to be sorted.
 * @size: the size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	/* The list/array need not be sorted if size is < 2 */
	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_int(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		if (!swapped)
			break;
	}
}
