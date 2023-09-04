#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to the duplicated string
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int j;

	if (str == NULL)
		return ((char *)0);
	while (str[i] != '\0')
	{
		i++;
	}

	s = (char *)malloc((i + 1) * sizeof(char));

	if (s == NULL)
		return ((char *)0);
	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
