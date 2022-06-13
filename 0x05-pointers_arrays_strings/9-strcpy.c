#include "main.h"

/**
 * _strcpy - a function that copies the string
 * pointed to by src
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: char.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}

	dest[i++] = *src;

	return (dest);
}
