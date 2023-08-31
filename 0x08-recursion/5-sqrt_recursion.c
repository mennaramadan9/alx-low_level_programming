#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: variable
 * @guess: variable
 * Return: result
 */
int _sqrt_recursive(int n, int guess);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursive(n, 1));
}
/**
 * _sqrt_recursive - find sqrt
 * @n: number
 * @guess: variable
 * Return: variable
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	return (_sqrt_recursive(n, guess + 1));
}
