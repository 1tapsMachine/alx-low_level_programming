#include <stdio.h>
#include <stdbool.h>
/**
* main - prints fibonacci sequence up to 50 numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int count;
unsigned long last, this, next;
last = 1;
this = 2;
while (true)
{
{
next = last + this;
last = this;
this = next;
if (last % 2 == 0)
{
count += last;
}
if (count > 4000000)
{
break;
}
}
printf("%d\n", count);
return (0);
}
}
