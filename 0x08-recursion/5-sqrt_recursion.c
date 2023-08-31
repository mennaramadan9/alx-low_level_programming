#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: variable
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt_recursion(n / 2) + 1);
}
