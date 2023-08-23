#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, lanx;

	lanx = 0;

	for (a = 0; str[a] != '\0'; a++)
		lanx++;

	n = (lanx / 2);

	if ((lanx % 2) == 1)
		n = ((lanx + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}


