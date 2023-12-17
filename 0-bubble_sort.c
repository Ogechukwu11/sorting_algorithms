#include "sort.h"

/**
 * bubble_sort - To sort array of integers in ascending order
 * @array: The array of integers
 * @size: The size of the array of integers
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t count;
	int flag, temp_array;

	do {
		flag = 0;
		for (count = 0; count < size - 1; count++)
		{
			if (array[count] > array[count + 1])
			{
				temp_array = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp_array;
				flag = 1;

				print_array(array, size);
			}
		}
	} while (flag);
}
