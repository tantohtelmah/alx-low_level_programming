#include "main.h"
#include <stdio.h>
#include <string.h>

int is_palindrome_helper(char *s, int l, int h);
/**
 * is_palindrome - is palindrome
 * @s: character
 * Return: integer
*/

int is_palindrome(char *s)
{
	int n = strlen(s);

	return (is_palindrome_helper(s, 0, n - 1));
}
/**
 * is_palindrome_helper - palindrome
 * @s: character
 * @l: int
 * @h: int
 * Return: integer
*/

int is_palindrome_helper(char *s, int l, int h)
{
	if (l >= h)
	{
		return (1);
	}
	if (s[l] != s[h])
	{
		return (0);
	}
	return (is_palindrome_helper(s, l + 1, h - 1));
}
