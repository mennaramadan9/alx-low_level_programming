#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program to reverse alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}