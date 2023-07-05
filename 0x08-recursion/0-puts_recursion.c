#include "main.h"
/**
* _puts_recursion - puts using recursion
*
* @s: string to print
*
* Return: void
*/
void _puts_recursion(char *s);
{
	_putchar(*s);
	while(*s){
		_putchar(*s);
		s++;
	}
}
