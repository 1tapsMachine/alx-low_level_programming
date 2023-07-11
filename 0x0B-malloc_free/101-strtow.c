#include "main.h"
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, len;
	char **words;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	for (i = 0, len = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			len++;
		}
	}
	if (len == 0)
	{
		return (NULL);
	}
	words = malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (len = 0; str[i + len] != ' ' && str[i + len]; len++)
			{
				;
			}
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
				{
					free(words[k]);
				}
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
			{
				words[j][k] = str[i + k];
			}
			words[j][k] = '\0';
			j++;
			i += len;
		}
	}
	words[j] = NULL;
	return (words);
}
