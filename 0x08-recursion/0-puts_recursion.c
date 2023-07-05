#include "main.h"
/**
* _puts_recursion - puts using recursion
*
* @s: string to print
*
* Return: void
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (s){
		_putchar(*s);
		s++;
	}
}
