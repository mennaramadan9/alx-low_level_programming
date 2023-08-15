#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: print from this number
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j++)
		{
			printf("%d", j);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}	
}
