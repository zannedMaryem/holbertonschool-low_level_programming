#include "stdio.h"
/**
 *main - program that prints the number of arguments passed into it.
 *@argc: number of arguments passed to the program.
 *@argv: array of arguments passd to the program.
 *
 * Return: 0 Success.
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
