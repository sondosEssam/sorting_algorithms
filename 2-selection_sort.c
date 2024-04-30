#include"sort.h"
/**
 * selection_sort - function
 *@array: arr
 *@size: size
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int small = array[0], ind = 0;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < small)
			{
				small = array[j];
				ind = j;
			}
		}
		array[ind] = array[i];
		array[i] = small;
		print_array(array, size);
		small = 1000000;
		ind = 100000;
	}
}
