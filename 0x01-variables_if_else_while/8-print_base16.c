#include <stdio.h>

/**
 * main - a program that prints all the numbers of base 16 in
 * lowercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char ltr = 'a';

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n += 1;
	}
	while (ltr <= 'f')
	{
		putchar(ltr);
		ltr += 1;
	}
	putchar('\n');
	return (0);
}
