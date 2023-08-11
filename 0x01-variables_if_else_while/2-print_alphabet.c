#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C prograam to print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c", i);
	}
	printf("\n");
	return (0);
}
