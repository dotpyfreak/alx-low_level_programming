#include "main.h"

/**
 * _isalpha - Checks if c is lowercase
 * @c: the character to be checked
 * Return: 1 if c is a letter,lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c > 97 && c < 122) || (c > 65 && c < 90));
}
