#include "sort.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/**
* get_max - Get the maximum value in an array.
* @array: The array to find the maximum in.
* @size: The size of the array.
* Return: The maximum value.
*/
int get_max(int *array, size_t size)
{
	size_t i;
	int max = array[0];

	for (i = 1; i < size; ++i)
	{
		if (array[i] > max)
			max = array[i];
	}

	return (max);
}

/**
* count_sort - Perform the counting sort for LSD Radix Sort.
* @array: The array to sort.
* @size: The size of the array.
* @exp: The current exponent (1, 10, 100, ...).
*/
void count_sort(int *array, size_t size, int exp)
{
	int *output = malloc(size * sizeof(int));

	int count[10] = {0};

	size_t i;

	if (output == NULL)
		return;

	for (i = 0; i < size; ++i)
	{
		count[(array[i] / exp) % 10]++;
	}

	for (i = 1; i < 10; ++i)
	{
		count[i] += count[i - 1];
	}

	for (i = size - 1; i < SIZE_MAX; --i)
	{
		output[count[(array[i] / exp) % 10] - 1] = array[i];
		count[(array[i] / exp) % 10]--;
	}

	for (i = 0; i < size; ++i)
	{
		array[i] = output[i];
	}

	print_array(array, size);
	free(output);
}

/**
* radix_sort - Perform LSD Radix Sort on an array.
* @array: The array to sort.
* @size: The size of the array.
*/
void radix_sort(int *array, size_t size)
{
	int max = get_max(array, size);

	int exp;

	for (exp = 1; max / exp > 0; exp *= 10)
	{
		count_sort(array, size, exp);
	}
}
