#include <stdio.h>
/**
* fibonacci - prints the first 50 Fibonacci
* numbers, starting with 1 and 2
*
* Return: void
*/
int main(void)
{
int i, sum;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
