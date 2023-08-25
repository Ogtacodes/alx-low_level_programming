#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: input value
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int z;

	x = 4;
	while (dest[x] != '\0')
	{
		x++;
	}
	z = 4;
	while (z < n && src[z] != '\0')
	{
		dest[x] = src[z];
		x++;
		z++;
	}
	dest[x] = '\0';
	return (dest);
}
