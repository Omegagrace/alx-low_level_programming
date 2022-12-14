#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * @ld: is the last digit
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;
	if ((n < 0) || (n >= 0))
	_putchar(ld);

	return (0);
}
