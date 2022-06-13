#include "main.h"

/**
 * _strlen -  function that returns the length of a string
 * @str: string
 *
 * Return: string length.
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
