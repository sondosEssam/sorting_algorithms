#include"sort.h"
/**
 * wsapi - function
 *@array1: arr
 *@array2: size
 *Return: void
 */
void wsapi(int *array1, int *array2)
{
	int tmp;

	tmp = *array1;
	*array1 = *array2;
	*array2 = tmp;
}
/**
 * partition - function
 *@array: arr
 *@low: size
 *@high: high
 *Return: void
 */
int partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j = 0;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			wsapi(&array[i], &array[j]);
		}
	}
	wsapi(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quick_sort - function
 *@array: arr
 *@size: size
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
	int pivot_index = 0;

	if (size <= 1)
		return;
	pivot_index = partition(array, 0, size - 1);
	quick_sort(array, pivot_index);
	quick_sort(array + pivot_index + 1, size - pivot_index - 1);
	print_array(array, size);
}
