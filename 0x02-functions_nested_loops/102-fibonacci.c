#include <stdio.h>
/**
* main - prints fibonacci sequence up to 50 numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i, count;
unsigned long long last, this, next;
last = 1;
this = 2;
count = 50;
for (i = 0; i < count; i++)
{
if (i == 1)
{
printf("%llu", last);
}
else
{
printf("%llu, ", last);
next = last + this;
last = this;
this = next;
}
}
printf("\n");
return (0);
}
