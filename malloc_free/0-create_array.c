#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a array of chars and
 * initializes it with a specific char.
 * @size: the size of the array to be initialized.
 * @c: the specific char to initialize the array with.
 *
 * Return: if == 0 or the function fails - NULL.
 * otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
