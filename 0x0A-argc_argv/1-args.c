#include <stdio.h>

/**
 * main - Prints the number of the args
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
