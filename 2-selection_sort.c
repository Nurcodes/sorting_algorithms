#include "sort.h"

/**
 * selection_sort - sorts with selection algorithm
 *
 * @array: array to sort
 *
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	unsigned long int i, j, tmp, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
		}
		print_array(array, size);
	}
}
