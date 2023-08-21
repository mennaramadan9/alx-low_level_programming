#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string
 * Return: 0
 */
void puts2(char *str)
{
	int toggle;

	toggle = 0;

	while (*str != '\0')
	{
		if (toggle == 0)
		{
			_putchar(*str);
		}
		toggle = 1 - toggle;
		str++;
	}
	_putchar('\n');
}
