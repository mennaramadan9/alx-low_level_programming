#include "main.h"

/**
 * is_palindrome_helper - check palindrome
 * @s: string
 * @start: variable
 * @end: variable
 * Return: 1 or 0
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - check palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int l;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	if (l <= 1)
		return (1);
	return (is_palindrome_helper(s, 0, l - 1));
}
