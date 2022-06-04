#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that prints all the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	int ltr = 'a';

	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr += 1;
	}
	putchar('\n');
	return (0);
}
