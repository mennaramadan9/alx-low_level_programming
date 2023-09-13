#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - unction that executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
