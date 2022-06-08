#include "main.h"

/**
 * _isalpha - checks for albabetic char
 * @c: argument
 *
 * Return: 1 for letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'z')))
		return (1);
	else
		return (0);
}
