#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: array of char
 * @b: constant
 * @n: size
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
