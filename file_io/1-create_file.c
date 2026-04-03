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
int create_file(const char *filename, char *text_content)
{
    int c_fd, w_fd;

    if (filename == NULL)
    {
        return(-1);
    }
    c_fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (c_fd < 0)
    {
        close(c_fd);
        return(-1);
    }
    w_fd = write(c_fd, text_content, strlen(text_content));
    if (w_fd < 0)
    {
        close(c_fd);
        return(-1);
    }
    close(c_fd);
    return(1);
}
