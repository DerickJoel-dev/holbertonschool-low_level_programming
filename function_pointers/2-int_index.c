#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - function that searches for an integer.
 * @array: the array of the pointers.
 * @size: the number of elements in the array.
 * @cmp: a pointer to the funcion to be used to compare values.
 *
 * Return: -1 if no elements matches and if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
