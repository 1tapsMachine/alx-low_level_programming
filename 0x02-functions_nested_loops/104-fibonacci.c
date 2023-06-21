#include <stdio.h>
/**
* main - prints fibonacci sequence up to 98 numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int n1, n2, n3, n4, n5, n6, n7;
n2 = 1;
n3 = 2;
printf("%lu", n2);
for (n1 = 1; n1 < 91; n1++)
{
printf(", %lu", n3);
n3 = n3 + n2;
n2 = n3 - n2;
}
n4 = n2 / 1000000000;
n5 = n2 % 1000000000;
n6 = n3 / 1000000000;
n7 = n3 % 1000000000;
for (n1 = 92; n1 < 99; ++n1)
{
printf(", %lu", n6 + (n7 / 1000000000));
printf("%lu", n7 % 1000000000);
n6 = n6 + n4;
n4 = n6 - n4;
n7 = n7 + n5;
n5 = n7 - n5;
}
printf("\n");
return (0);
}