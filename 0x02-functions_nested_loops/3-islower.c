#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: argument
 * Return: 1 for lowercase, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
