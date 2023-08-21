#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int len, i, a;

	len = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
