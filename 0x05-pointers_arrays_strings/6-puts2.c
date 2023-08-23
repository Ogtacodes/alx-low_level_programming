#include "main.h"
/**
 * puts2 - to print only one character out of two
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int lanx = 0;
	int z = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		lanx++;
	}
	z = lanx - 1;
	for (o = 0 ; o <= z ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

