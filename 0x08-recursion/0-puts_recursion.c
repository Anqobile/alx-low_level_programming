#include "main.h"

/**
 * _puts_recursion - Function that prints a string followed byb a new line
 * @s: is the string to print
 * Return: Nothing.
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
