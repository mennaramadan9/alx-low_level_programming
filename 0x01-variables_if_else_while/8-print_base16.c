#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print Hexa
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		putchar(j + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
