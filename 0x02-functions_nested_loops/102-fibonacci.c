#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2
 *
 * Return:0
 */

int main(void)
{
	int counter;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (counter = 0; counter < 50; counter++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
