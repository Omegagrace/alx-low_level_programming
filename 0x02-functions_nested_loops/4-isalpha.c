#include "main"

/**
 * _isalpha - check for alphabetic character
 * @c: is the what we are checking
 * Return: 1 if c is a letter, lowercase or upper, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
