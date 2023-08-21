#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	i = len / 2;

	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
