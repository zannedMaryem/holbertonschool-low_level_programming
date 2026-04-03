#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
 * append_text_to_file - function that appends
 * a text to an existing file.
 * @filename: the file name.
 * @text_content: text to write.
 *
 * Return: returns 1 in succuss or -1 if failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_fd, w_fd;

	if (filename == NULL)
	{
		return (-1);
	}
	o_fd = open(filename, O_WRONLY | O_APPEND);
	if (o_fd < 0)
	{
		close(o_fd);
		return (-1);
	}
	if (text_content != NULL)
	{
		w_fd = write(o_fd, text_content, strlen(text_content));
		if (w_fd < 0)
		{
			close(o_fd);
			return (-1);
		}
	}
	close(o_fd);
	return (1);
}
