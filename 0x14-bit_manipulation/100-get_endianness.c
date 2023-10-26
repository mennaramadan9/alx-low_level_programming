#include "main.h"

/**
 * get_endianness - function
 * Return: int
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	return ((*byte == 1) ? 1 : 0);
}
