#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *o = needle;

		while (*m == *o && *o != '\0')
		{
			m++;
			o++;
		}

		if (*o == '\0')
			return (haystack);
	}

	return (0);
}
