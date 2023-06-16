#include <stdio.h>
/**
* main - prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

for (size_t i = 0; i < (sizeof(alphabet) / sizeof(char)); i++)
{
putchar(alphabet[i]);
}
return (0);
}
