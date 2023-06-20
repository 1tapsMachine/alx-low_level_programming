#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void fibonacci(void)
{
    int prevNum,thisNum,nextNum,userInput;
    printf("Enter a number: ");
    scanf("%d", &userInput);
    prevNum=0;
    thisNum=1;
    nextNum=1;
    while (thisNum < userInput)
    {
        printf("%d, ", prevNum);
        nextNum = prevNum + thisNum;
        prevNum = thisNum;
        thisNum = nextNum;
    }
}
