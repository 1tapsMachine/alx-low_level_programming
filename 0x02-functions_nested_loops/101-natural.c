#include <stdio.h>
/**
* fibonacci - prints the first 50 Fibonacci numbers, starting with 1 and 2
*
* Return: Always 0 (Success)
*/
void fibonacci(void)
{
    int prevNum,thisNum,nextNum;
    prevNum=1;
    thisNum=2;
    nextNum=3;
    while (thisNum < 50)
    {
        printf("%d, ", prevNum);
        nextNum = prevNum + thisNum;
        prevNum = thisNum;
        thisNum = nextNum;
    }
}
