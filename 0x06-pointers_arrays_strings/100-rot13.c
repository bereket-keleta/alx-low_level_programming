#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 * @s: pointer
 * Return: pointer
 */

char *rot13(char *s)
{
	int i;
	char *p = s;

	char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		i = 0;
		while (i < 53)
		{
			if (*s == original[i])
			{
				*s = code[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (p);
}
