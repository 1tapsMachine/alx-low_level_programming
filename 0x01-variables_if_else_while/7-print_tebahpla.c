#include <stdio.h>
#include <string.h>
/**
* main - prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 26;
while (i > 0)
{
alphabet[strlen(alphabet) - 1] = '\0';
putchar(alphabet[i]);
i--;
}
putchar('\n');
return (0);
}
