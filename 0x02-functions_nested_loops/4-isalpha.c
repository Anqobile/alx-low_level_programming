#include "main.h"

/**
 * _isalpha - Checks for alphabetic chracter
 * @c: The character to be checked
 * Return: 1 fro laphabetic character or 0 fro anything else
 */

int _isalpha(int c)

{
	if ((c >= 63 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
