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
int i, j, k;
if (n >= 0 && n <= 15)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if (j == 0)
{
printf("%d", k);
}
else if (k < 10)
{
printf(",   %d", k);
}
else if (k >= 10 && k < 100)
{
printf(",  %d", k);
}
else if (k >= 100)
{
printf(", %d", k);
}
}
}
}
}
