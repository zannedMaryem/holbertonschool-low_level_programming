#include "main.h"
/**
 *reverse_array - function that reverses the elements of an array
 *@a: input array
 *@n: number of array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int b[1024];

	for (i = 0; i < n; i++)
	{
		b[i] = a[n - i - 1];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
}
