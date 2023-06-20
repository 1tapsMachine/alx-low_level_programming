#include <stdio.h>
/**
* main - prints fibonacci sequence up to 50 numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, count;
unsigned long last, this, next;
last = 1;
this = 2;
count = 50;
for (i = 0; i < count; i++)
{
if (last == 1)
{
printf("%lu", last);
}
else
{
printf("%lu, ", last);
next = last + this;
last = this;
this = next;
}
}
printf("%lu", last);
return (0);
}
