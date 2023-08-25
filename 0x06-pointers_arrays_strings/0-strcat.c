#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: string one
 * @dest: string two
 * Return: to destination string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int y;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[a] = src[y];
		a++;
		y++;
	}
	dest[a] = '\0';
	return (dest);
}

