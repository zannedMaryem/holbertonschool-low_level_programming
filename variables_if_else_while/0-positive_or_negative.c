#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * Main - Entry point
 *
 * Description: This is a program that takes a random value n
 *		and determines whether if it's positive or negative or null
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
