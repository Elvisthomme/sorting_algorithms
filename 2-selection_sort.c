#include "sort.h"
/**
  * selection_sort - sort an array using selection sort
  *
  * @array: the array to sort
  * @size: the size of the array
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j, s;
	int tmp;

	if (array)
	for (i = 0; i < size - 1; i++)
	{
		s = i;
		for (j = s + 1; j < size; j++)
			if (*(array + j) < *(array + s))
				s = j;
		if (s != i)
		{
			tmp = *(array + i);
			*(array + i) = *(array + s);
			*(array + s) = tmp;
			print_array(array, size);

		}
	}
}
