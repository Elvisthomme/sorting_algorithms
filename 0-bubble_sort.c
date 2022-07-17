#include "sort.h"
/**
  * bubble_sort - sort an array using bubble_sort
  *
  * @array: the array to sort
  * @size: the size of the array
  */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, check = 1;

	while (check)
	{
		check = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (*(array + i) > *(array + i + 1))
			{
				tmp = *(array + i);
				*(array + i) = *(array + i + 1);
				*(array + i + 1) = tmp;
				check = 1;
				print_array(array, size);
			}
		}
	}
}
