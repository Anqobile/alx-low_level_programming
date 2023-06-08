#include "main.h"

/**
 * _puts_recursion - Prints a string that is follwed by a new line
 * @s: is the string to print
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
