#include "main.h"
/**
 * _puts - print a string to stdout.
 * @str: the string to print
 * _putchar print new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

