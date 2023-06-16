#include <stdio.h>
/**
* main - print numberzz
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
char numberz[] = "0123456789";
while (i < 10)
{
putchar(numberz[i]);
i++;
}
putchar('\n');
return (0);
}