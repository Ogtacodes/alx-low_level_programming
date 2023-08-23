#include <unistd.h>

/**
 * _putchar - to write the character c to stand out
 * @c: character to stand out
 * Return: on success 1
 * on error -1 is returned and errno is set
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return c;
}
