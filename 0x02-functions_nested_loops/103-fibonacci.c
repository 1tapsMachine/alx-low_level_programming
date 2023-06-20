#include <stdio.h>
/**
* main - prints fibonacci sequence up to 50 numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long last, this, next, count;
last = 1;
this = 2;
while (last < 4000000)
{
{
next = last + this;
last = this;
this = next;
if (last % 2 == 0)
{
count += last;
}
}
}
printf("%lu\n", count);
return (0);
}
