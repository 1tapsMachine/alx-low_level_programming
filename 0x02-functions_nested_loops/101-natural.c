#include <stdio.h>
/**
* fibonacci - prints the first 50 Fibonacci 
* numbers, starting with 1 and 2
*
* Return: void
*/
void main(void)
{
int lastNum,thisNum,nextNum,count;
lastNum = 1;
thisNum = 2;
nextNum = 0;
count = 0;
printf("%d, %d, ", lastNum, thisNum);
while (count < 50)
{
nextNum = lastNum + thisNum;
printf("%d, ", nextNum);
lastNum = thisNum;
thisNum = nextNum;
count++;
}
printf("\n");
}
