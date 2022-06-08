#include "main.h"

/**
 * pint_alphabet_x10 - prints 10x the alphabet
 *
 * Return : 0
 */

void print_alphabet_x10(void)
{
	int n, counter;

	counter = 0;
	while (counter < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		counter++;
		_putchar('\n');
	}
}
