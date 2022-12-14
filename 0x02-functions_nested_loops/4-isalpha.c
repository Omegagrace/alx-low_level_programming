#include "main"

/**
 * _isalpha - check for alphabetic character
 * @c: is what we are checking for
 * Return: 1 if c is a letter, lowercase or upper, otherwise 0
 */

int _isalpha(int c)
{
	if ((c <= 'a' && C <= 'z') || (c <= 'A' && C <= 'Z'))
		return (0);
	else
		return (1);
}
