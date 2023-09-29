#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary to int
 * @b: string
 * Return: binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;

	if (b == NULL)
		return (0);
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result = result << 1;
		result += (b[index] - '0');
		index++;
	}
	return (result);
}
