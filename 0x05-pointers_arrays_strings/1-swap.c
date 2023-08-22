#include "main.h"

/**
 * swap_int - swapping the variables of two integers
 * @a: swap it address and store that of b
 * @b: swap it address and store that of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
