#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assign a random number to the variable num and then
 * determines wheather the number is positive, negative or zero
 * Return: 0
 */

int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	if (num > 0)
	{
	printf("%d is positive\n", num);
	}
	else if (num < 0)
	{
	printf("%d is negative\n", num);
	}
	else
	{
	printf("%d is zero\n", num);
	}
	return (0);
}
