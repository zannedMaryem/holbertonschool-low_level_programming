#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
 * create_file - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: the file name.
 * @text_content: text to write.
 *
 * Return: returns 1 in succuss or -1 if failed.
 */
int create_file(const char *filename, char *text_content)
{
	int c_fd, w_fd;

	if (filename == NULL)
	{
		return (-1);
	}
	c_fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (c_fd < 0)
	{
		close(c_fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		w_fd = write(c_fd, text_content, strlen(text_content));
	}
	if (w_fd < 0)
	{
		close(c_fd);
		return (-1);
	}
	close(c_fd);
	return (1);
}
