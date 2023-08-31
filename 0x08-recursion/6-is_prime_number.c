#include "main.h"

/**
 * is_prime_number - check if prime or not
 * @n: variable
 * @divisor: divisor
 * Return: 1 or 0
 */
int is_prime_number_helper(int n, int divisor);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number_helper(n, n - 1));
}

/**
 * is_prime_number_helper - help prime dicision
 * @n: number
 * @divisor: divisor
 * Return: 1 or 0;
 */
int is_prime_number_helper(int n, int divisor)
{
	if (divisor <= 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_number_helper(n, divisor - 1));
}
