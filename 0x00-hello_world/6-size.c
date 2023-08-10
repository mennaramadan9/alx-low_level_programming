#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(S)\n", sizeof(char));
	printf("Size of an int: %ld byte(S)\n", sizeof(int));
	printf("Size of a long int: %ld byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %ld byte(S)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(S)\n", sizeof(float));
	return (0);
}
