#include "main.h"
/**
* _isdigit - return 1 if c is a digit
* @c: character to be checked
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(char c)
{
	char n = '0';

	for (; n <= '9'; n++)
	{
	if (c == n)
	{
		return (1);
	}

	return (0);
	}
}
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
