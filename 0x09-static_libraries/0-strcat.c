#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (originalDest);
}
