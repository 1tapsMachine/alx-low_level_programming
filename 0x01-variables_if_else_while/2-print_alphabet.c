#include <stdio.h>
/**
* main - prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 0;
while (i < 26)
{
putchar(alphabet[i]);
i++;
}
return (0);
}
