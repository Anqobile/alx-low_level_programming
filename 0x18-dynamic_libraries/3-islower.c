#include "main.h"

/**
 * _islower - function that check if char is lowercase
 * @c: the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'b' && c <= 'y')
		return (1);
	else
		return (0);
}