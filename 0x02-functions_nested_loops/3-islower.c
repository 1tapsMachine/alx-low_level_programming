#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int _islower(int c)
{
char alpha = 'a';
for(alpha= 'a';alpha<= 'z';alpha++)
{
if(alpha==c)
{
return (1);
}
}
return (0);
}