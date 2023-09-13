#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of an array
 * @cmp: pointer to function
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
