#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: the character to be checked.
 * Return: 1 for alhanumeric character or 0 for anything else.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
