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
 *@size: size
 *Return: void
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot_value = array[high];
	int i = low, j = 0;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			wsapi(&array[i], &array[j]);
			i++;
		}
	}
	wsapi(&array[i], &array[high]);
	if (array[i] != array[high])
		print_array(array, size);
	return (i);
}

/**
 * quick_sort - function
 *@array: arr
 *@size: size
 *Return: void
 */
void quick_sort(int *array, size_t size)
{

	quick_sort_recursion(array, 0, size - 1, size);

}
/**
 * quick_sort_recursion - function
 *@array: arr
 *@low: size
 *@high: hspda
 *@size: size
 *Return: void
 */
void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
	int pivot_index = partition(array, low, high, size);

	quick_sort_recursion(array, low, pivot_index - 1, size);
	quick_sort_recursion(array, pivot_index + 1, high, size);
	}
}
