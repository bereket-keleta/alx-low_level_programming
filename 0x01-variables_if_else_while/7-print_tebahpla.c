#include <stdio.h>

/**
 * main - print lowercase in reverse
 * Return: 0
 */
int main(void)
{
	int ltr = 'z';

	while (ltr >= 'a')
	{
		putchar(ltr);
		ltr -= 1;
	}
	putchar('\n');
	return (0);
}
