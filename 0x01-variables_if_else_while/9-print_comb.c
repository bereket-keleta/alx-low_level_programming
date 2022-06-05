#include <stdio.h>

/**
 * main - a program that prints all possible combinations
 * of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int n = 1;

	while (n < 10)
	{
		putchar((n % 10) + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n += 1;
	}
	putchar('\n');
	return (0);
}
