#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Begining
 * Return: defintely 0
 */
int main(void)
{
	int n;

	int ldo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldo = n % 10;
	if (ldo > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ldo);
	}
	else if (ldo == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ldo);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ldo);
	}
	return (0);
}
