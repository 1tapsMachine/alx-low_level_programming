#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be counted
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
/**
 * check - checks if string is identical
 * @s1: string to be checked
 * @s2: string to be checked
 * @i: index
 * @j: index
 * @len1: length of string
 * @len2: length of string
 * Return: 1 if identical, 0 if not
 */
int check(char *s1, char *s2, int i, int j, int len1, int len2)
{
	if (j == len2)
		return (1);
	if (s2[j] == '*')
		return (check(s1, s2, i, j + 1, len1, len2));
	else if (s2[j] == s1[i])
		return (check(s1, s2, i + 1, j + 1, len1, len2));
	else if (s2[j] != s1[i])
	{
		if (s1[i] == '\0')
			return (0);
		else if (s2[j] == '*')
		{
			return (check(s1, s2, i + 1, j + 1, len1, len2));
		}
	}
	return (0);
}
/**
 * wildcmp - compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: 1 if strings are identical, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	int len1, len2;

	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);
	return (check(s1, s2, 0, 0, len1, len2));
}
