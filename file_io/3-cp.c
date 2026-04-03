#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
/**
 * main - a program that copies the content of a file to another file.
 * @argc: number of arguments.
 * @argv: file names.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int o_fd1, o_fd2, r_fd, w_fd, c_fd1, c_fd2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	o_fd1 = open(argv[1], O_RDONLY);
	if (o_fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		c_fd1 = close(o_fd1);
		if (c_fd1 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", c_fd1);
			exit(100);
		}
		exit(98);
	}
	o_fd2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (o_fd2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		c_fd2 = close(o_fd2);
		if (c_fd2 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", c_fd2);
			exit(100);
		}
		exit(99);
	}
	while ((r_fd = read(o_fd1, buffer, sizeof(buffer))) > 0)
	{
		if (r_fd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			c_fd1 = close(o_fd1);
			if (c_fd1 < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", c_fd1);
				exit(100);
			}
			exit(98);
		}
		w_fd = write(o_fd2, buffer, r_fd);
		if (w_fd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			c_fd2 = close(o_fd2);
			if (c_fd2 < 0)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", c_fd2);
				exit(100);
			}
			exit(99);
		}
	}
	close(o_fd1);
	close(o_fd2);
	return (0);
}
