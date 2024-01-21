#include <stdio.h>
#include "sort.h"

/**
* swap - Swaps two integers in an array
* @a: Pointer to the first integer
* @b: Pointer to the second integer
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
* lomuto_partition - Lomuto partition scheme for Quick sort
* @array: Array to be sorted
* @low: Starting index of the partition
* @high: Ending index of the partition
* @size: Size of the array
*
* Return: Index of the pivot after partitioning
*/
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];

	int i = low - 1;

	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
* quicksort - Recursive function to perform Quick sort
* @array: Array to be sorted
* @low: Starting index of the partition
* @high: Ending index of the partition
* @size: Size of the array
*/
void quicksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = lomuto_partition(array, low, high, size);

		quicksort(array, low, pivot - 1, size);
		quicksort(array, pivot + 1, high, size);
	}
}

/**
* quick_sort - Initiates the Quick sort algorithm on an array
* @array: Array to be sorted
* @size: Size of the array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
