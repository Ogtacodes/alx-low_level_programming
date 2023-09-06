#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space address
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *zim;
	int i, k = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		zim[k] = str[k];

	return (zim);
}

