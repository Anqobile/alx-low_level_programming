#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int h, c, m, len, f, digit;

	h = 0;
	c = 0;
	m = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (h < len && f == 0)
	{
		if (s[h] == '-')
			++c;

		if (s[h] >= '0' && s[h] <= '9')
		{
			digit = s[h] - '0';
			if (c % 2)
				digit = -digit;
			m = m * 10 + digit;
			f = 1;
			if (s[h + 1] < '0' || s[h + 1] > '9')
				break;
			f = 0;
		}
		h++;
	}

	if (f == 0)
		return (0);

	return (m);
}
