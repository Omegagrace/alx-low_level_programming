#include "main.h"

/**
 * _puts - This prints a string
 * @str: is the string to print
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
