#include "main.h"

/**
 * a function that prints the alphabet, in lowercase
 *
 * Return : 0
 */

void print_alphabet(void)
{
	int ltr = 'a';

	while (ltr <= 'z')
	{
		_putchar(ltr);
		ltr += 1;
	}
	_putchar('\n');
}
