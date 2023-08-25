#include "main.h"

/**
 * string_toupper - function that changes lowercase letters to uppercase
 * @str: string
 * Return: string
 */
char *string_toupper(char *str)
{
	char *s = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (s);
}
