#include "main.h"
#include <stdio.h>

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i, j;
	char letter[] = "AaEeOoTtLl";
	char number[] = "4433007711";

	for (i = 0; s[i]; i++)
		for (j = 0; letter[j]; j++)
			if (letter[j] == s[i])
				s[i] = number[j];

	return (s);
}

