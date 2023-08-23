#include "main.h"

/**
 * rev_string - to reverse a string
 * @s: string
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int timer = 0;
	int i;

	while (s[timer] != '\0')
	timer++;
	for (i = 0; i < timer; i++)
	{
		timer--;
		rev = s[i];
		s[i] = s[timer];
		s[timer] = rev;
	}
}

