#include "main.h"

/**
 * print_array - a function that prints t elements of an array
 * @a: array name
 * @t: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int t)
{
	int i;

	for (i = 0; i < (t - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (t - 1))
		{
			printf("%d", a[t - 1]);
		}
			printf("\n");
}

