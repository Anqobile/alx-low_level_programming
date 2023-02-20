#include <stdio.h>
/**
 * main - Entry point
 * Description: print the alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	return (0);
}
