#include "main.h"
/**
 * check_palidnrome - checks if a string is a palindrome
 * @s: string
 * @i: start index
 * @j: end index
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */
int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (check_palindrome(s, i + 1, j - 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (check_palindrome(s, 0, len - 1));
}
