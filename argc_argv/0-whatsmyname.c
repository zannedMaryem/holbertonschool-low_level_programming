#include "stdio.h"
/**
 *main - a program that prints its name, followed by a new line.
 *@argc: number of arguments passed to the program
 *@argv: array of arguments passd to the program
 *
 * Return: 0 Success.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
