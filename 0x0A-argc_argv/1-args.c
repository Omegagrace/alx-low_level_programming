#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: number of arguments or argument count
 * @argv: arguments vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argc*/
	printf("%i\n", argc - 1);
	return (0);
}
