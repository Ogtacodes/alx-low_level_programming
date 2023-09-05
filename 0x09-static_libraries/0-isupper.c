#include "main.h"
/**
 * _isupper - UPPERCASE LETTERS
 * @c: char to check
 *
 * Return:zero or one
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

