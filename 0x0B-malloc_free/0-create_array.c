#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: int
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return ((char *)0);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return ((char *)0);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
