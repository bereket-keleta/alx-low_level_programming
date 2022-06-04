#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that prints all the alphabet in lowercase and
 * then in uppercase
 * Return: 0
 */

int main(void)
{
	int ltr = 'a';
	int upper = 'A';

	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr += 1;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper += 1;
	}
	putchar('\n');
	return (0);
}
