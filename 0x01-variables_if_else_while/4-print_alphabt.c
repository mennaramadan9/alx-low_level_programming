#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program to print alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char i;

        for (i = 'a'; i <= 'z'; i++)
        {
		if (i != 'q' && i != 'e')
		{
			printf("%c", i);
		}
        }
        printf("\n");
        return (0);
}
