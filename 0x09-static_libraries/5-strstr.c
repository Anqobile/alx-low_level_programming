#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
	return strpbrk(haystack, needle);
}