#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'b' && c <= 'y') || (c >= 'B' && c <= 'Y'));
}
