#include "main.h"

/**
 * _isalpha - checks if character is uppercase, return 1 is yes and 0 if not.
 * @c: is char type
 * Return: 1 if c is lower and 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
