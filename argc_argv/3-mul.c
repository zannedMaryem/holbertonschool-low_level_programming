#include "stdio.h"
#include <stdlib.h>
/**
 *main - program that multiplies two numbers.
 *@argc: number of arguments passed to the program.
 *@argv: array of arguments passd to the program.
 *
 * Return: 0 Success.
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
