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
	char *separators = " \t\n,;.!?\"(){}";
	int i = 0, j = 0, flag = 0;

	for (; str[i] != '\0'; i++)
	{
		if (flag)
		{
			if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z'))
				flag = 0;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				flag = 0;
			}
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (str[i] == separators[j])
					flag = 1;
			}
		}
		else
		{
			if (str[0] >= 'a' && str[0] <= 'z')
			{
				flag = 1;
			}
			for (j = 0; separators[j] != '\0'; j++)
			{
				if (str[i] == separators[j])
					flag = 1;
			}
		}
	}
	return (str);
}
