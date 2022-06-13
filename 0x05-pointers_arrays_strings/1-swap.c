#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @num1: first num
 * @num2: second num
 *
 * Return: void
 */
void swap_int(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
