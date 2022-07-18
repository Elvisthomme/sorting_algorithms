#include "sort.h"


/**
  * partition - partition an array using quick sort
  *
  * @array: the array to sort
  * @b: the begin of the partition to sort
  * @e: the end of the partition to sort
  * @s: the size of the array
  * Return: the position of the pivot
  */
int partition(int *array, size_t b, size_t e, size_t s)
{
	size_t i;
	int tmp;

	for (i = b; i < e; i++)
	{
		if (*(array + i) < *(array + e))
		{
			tmp = *(array + b);
			*(array + b) = *(array + i);
			*(array + i) = tmp;
			b++;
		}
	}

	tmp = *(array + b);
	*(array + b) = *(array + e);
	*(array + e) = tmp;
	print_array(array, s);
	return (b);
}

/**
  * quick_sorter - sort a partition of an array using quick sort
  *
  * @array: the array to sort
  * @b: the begin of the partition to sort
  * @e: the end of the partition to sort
  * @s: the size of the array
  */
void quick_sorter(int *array, size_t b, size_t e, size_t s)
{
	if ((int) b < (int) e)
	{
		size_t i = partition(array, b, e, s);
		quick_sorter(array, i + 1, e, s);
		quick_sorter(array, b, i - 1, s);
	}
}

/**
  * quick_sort - sort an array using quick sort
  *
  * @array: the array to sort
  * @size: the size of the array
  */
void quick_sort(int *array, size_t size)
{
	if (array)
		quick_sorter(array, 0, size - 1, size);
}
