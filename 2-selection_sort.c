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
 * selection_sort - function
 *@array: arr
 *@size: size
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int samllest = 0, ind = 0;

	for (i = 0; i < size; i++)
	{
		samllest = array[i];
		ind = -1;
		for (j = i; j < size; j++)
		{
			if (array[j] < samllest)
			{
				samllest = array[j];
				ind = j;
			}
		}
		if (ind != -1)
		{
		wsapi(&array[i], &array[ind]);
		print_array(array, size);
		}
	}
}
