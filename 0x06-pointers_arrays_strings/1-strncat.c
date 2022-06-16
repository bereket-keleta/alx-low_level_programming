#include "main.h"
#include <stdio.h>

/**
 * _strncat -  a function that concatenates two strings
 * @dest: destination str
 * @src: source str
 * @n: array
 * Return : 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
