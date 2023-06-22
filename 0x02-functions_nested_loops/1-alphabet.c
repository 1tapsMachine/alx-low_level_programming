#include "main.h"
/**
* print_alphabet - prints the alphabet in lowercase
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
_putchar(alphabet[i]);
i++;
}
_putchar('\n');
}
