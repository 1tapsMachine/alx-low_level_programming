#include "main.h"
/**
*  _atoi - convert a string to an integer
*
* @s: string to convert
*
* Return: 
*/
int _atoi(char *s)
{
	int mutiplier = 0, i = 0,  found = 0, sign = 1;
	while (*(s + i))
	{
		if (*(s+i) == "-")
		{
			sign *= -1;
		}
		else
		{
			sign *= 1;
		}
		if (*(s+i) >= '0' && *(s+i) <='9')
		{
			mutiplier *= 10;
			mutiplier += *(s+i) - '0';
			found = 1;
		}
		else if (found) 
		{
			break;
		}
		i++;
	}
	return (mutiplier * sign);
}
