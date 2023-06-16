#include <stdio.h>
/**
* main - printing combinaison of single digits
*
* Return: Always 0 (Success)
*/
int main(void)
{
int digit=0;
while (digit< 10)
{
if(digit < 9)
{
putchar(digit + '0');
putchar(', ');
digit++;
}
else{
putchar(digit + '0');
putchar('\n');
digit++;
}

}
return (0);
}
