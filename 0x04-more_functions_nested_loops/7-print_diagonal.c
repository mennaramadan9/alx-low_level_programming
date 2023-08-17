#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: n - the number of times the character \ should be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
		};
		_putchar('\n');
	}
}
