#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of a certain number
 * of elements each of an inputted byte size.
 * @nmemb: the number of elements.
 * @size: the byte size of each arrays element.
 *
 * Return: if nmemb = 0, size = 0, or the function fails - NULL.
 * ptherwise - a pointer to the allocated memory.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
