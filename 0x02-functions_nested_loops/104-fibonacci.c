#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int last = 1, this = 2, next;
for (i = 0; i < 98; i++)
{
printf("%lu", this);
}
if (i < 97)
{
printf(", ");
next = last + this;
last = this;
this = next;
}
printf("\n");
return 0;
}


