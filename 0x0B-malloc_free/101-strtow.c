#include "main.h"
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, wc, wl;
	char **wds;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	for (i = 0, wc = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			wc++;
		}
	}
	if (wc == 0)
	{
		return (NULL);
	}
	wds = malloc(sizeof(char *) * (wc + 1));
	if (wds == NULL)
	{
		return (NULL);
	}
	for (i = 0, k = 0; str[i] && k < wc; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i, wl = 0; str[j] && str[j] != ' '; j++, wl++)
			{
				;
			}
			wds[k] = malloc(sizeof(char) * (wl + 1));
			if (wds[k] == NULL)
			{
				for (; k >= 0; k--)
				{
					free(wds[k]);
				}
				free(wds);
				return (NULL);
			}
			for (j = 0; j < wl; j++)
			{
				wds[k][j] = str[i++];
			}
			wds[k++][j] = '\0';
		}
	}
	wds[k] = NULL;
	return (wds);
}
