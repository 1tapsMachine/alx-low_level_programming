#include <stdio.h>
/**
* main - prints fibonacci sequence up to 50 numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int prevNum, thisNum, nextNum, count;
prevNum = 1;
thisNum = 2;
count = 0;
while (count < 54)
{
printf("%d, ", prevNum);
nextNum = prevNum + thisNum;
prevNum = thisNum;
thisNum = nextNum;
count++;
}
return (0);
}
