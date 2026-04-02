#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: the file name.
 * @letters: number of letters to be read and written.
 *
 * Return: returns the actual number of letters it could
 * read and print or 0 if filename is NULL or it fails
 * to open, read or write the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_err, r_err, w_err;
	size_t len = 0;
	char *msg = malloc(sizeof(*msg) * letters);

	if (letters == 0 || msg == NULL || filename == NULL)
	{
		return (0);
	}
	o_err = open(filename, O_RDONLY, S_IRUSR | S_IWUSR);
	r_err = read(o_err, msg, letters);
	if (o_err < 0 || r_err < 0)
	{
		return (0);
	}
	w_err = write(STDOUT_FILENO, msg, letters);
	if (w_err < 0)
	{
		return (0);
	}
	close(o_err);
	len = strlen(msg);
	return (len);
}
