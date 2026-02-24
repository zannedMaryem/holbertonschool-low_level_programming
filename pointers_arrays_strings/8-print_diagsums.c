#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: input matrix
 * @size: of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag_1 = 0;
	int diag_2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_1 += a[i][i];
		diag_2 += a[i][size - i - 1];
	}
	printf("%d, %d\n", diag_1, diag_2);
}
