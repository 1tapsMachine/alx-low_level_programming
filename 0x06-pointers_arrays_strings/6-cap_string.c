#include "main.h"
#include <string.h>
/**
* cap_string - capitalizes all words of a string
*
* @str: string to be capitalized
*
* Return: the resulting string
*/
char *cap_string(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		if (
		(str[i] == '.' || str[i] == ';' || str[i] == ',' || str[i] == '!' ||
		str[i] == '?' || str[i] == ',' || str[i] == '"' || str[i] == '(' ||
		str[i] == ')' || str[i] == '{' || str[i] == '}')
		&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			++i;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	return (str);
}
