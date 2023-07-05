#include "main.h"
/**
 * get_last_char - gets the last character of a string
 *
 * @s: string to get last character of
 *
 * Return: last character of string
*/
int get_last_char(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_last_char(s + 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: (1) if palindrome, (0) if not
*/
int is_palindrome(char *s)
{
	if (*s != *(s + get_last_char(s) - 1))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
