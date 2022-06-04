#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program that prints all single digit numbers
 * of base 10 starting from 0 and only allowed to use putchar
 * Return: 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		n += 1;
	}
	putchar('\n');
	return (0);
}
