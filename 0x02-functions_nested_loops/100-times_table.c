#include <stdio.h>
/**
* print_times_table - prints the n times table, starting with 0
*
* @n : integer to print it's time table
*
* Return: Always 0 (Success)
*/
void print_times_table(int n)
{
int i, j, prod;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
prod = i * j;
if (j == 0)
{
printf("%d", prod);
}
else if (prod < 10)
{
printf(",   %d", prod);
}
else if (prod >= 10 && prod < 100)
{
printf(",  %d", prod);
}
else if (prod >= 100)
{
printf(", %d", prod);
}
}
printf("\n");
}
}
}
