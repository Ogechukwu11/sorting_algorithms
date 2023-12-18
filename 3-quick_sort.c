#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * quick_sort - sort an array of int
 * @array: the arr to be sorted
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - Recursive function for Quick Sort
 * @array: The array to be sorted
 * @low: The low index of the partition
 * @high: The high index of the partition
 * @size: The size of the array
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int p_index;

	if (low < high)
	{
		p_index =  lomuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, p_index - 1, size);
		quick_sort_recursive(array, p_index + 1, high, size);
	}
}

/**
 * lomuto_partition - Lomuto partition scheme for Quick Sort
 * @array: The array to be sorted
 * @low: The low index of the partition
 * @high: The high index of the partition
 * @size: The size of the array
 * Return: The partition index
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	print_array(array, size);

	return (i + 1);
}
