#inlclude "main.h"

/**
 * _isdigit - Checks for a digit ( 0 through 9)
 * @c: any given digit
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	return ((c >= 48) && (c <= 57));
}
