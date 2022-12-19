#include <stdio.h>

/**
 * swap_int - Swap the value of two integer
 * @a: is the first integer to be swapped
 * @b: is the second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* This function swap the value of two integers */

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
