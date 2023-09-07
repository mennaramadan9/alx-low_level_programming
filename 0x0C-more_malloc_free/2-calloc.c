#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: int
 * @size: int
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *ptr1;
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (int *)malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	ptr1 = (unsigned char *)ptr;
	for (i = 0; i < nmemb * size; i++)
		ptr1[i] = 0;
	return (ptr);
}
