#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * the program asigns a random number to the variable 
 * and determins wheather the number is +ve or -ve
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0){
	printf("%d is positive\n",n);
	}
	else if(n < 0)
	{
	printf("%d is negative",n);
	}
	else
	{
	printf("%d is zero",n);
	}
	return (0);
}
