#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that prints the alphabet in lowercase
 * except the two letters of q and e
 * Return: 0
 */

int main(void)
{
	int ltr = 'a';

	while (ltr <= 'z')
	{
		if (ltr == 'q' || ltr == 'e')
		{
			ltr += 1;
			continue;
		}
		else
		{
			putchar(ltr);
			ltr += 1;
		}
	}
	putchar('\n');
	return (0);
}
