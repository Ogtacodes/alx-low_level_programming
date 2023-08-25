#include "main.h"

/**
 * _strncpy -  copies a string.
 * @dest: value one
 * @src: value two
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < 0)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
