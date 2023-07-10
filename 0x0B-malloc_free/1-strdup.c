#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to new string, or NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		len++;
		str++;
	}
	cpy = malloc(++len * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
