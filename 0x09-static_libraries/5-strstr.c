#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return ((char *)0);
}
