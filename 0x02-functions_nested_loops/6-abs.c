#include "main.h"

/**
 * _abs - this method computes the absolute vaue of an integer
 * @n: argument
 * Return: absolute val of n
 */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
