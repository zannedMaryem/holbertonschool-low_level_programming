#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
/**
 * read_textfile
 *
 *
 *
 *
 *
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
    o_err = open(filename, O_RDWR);
    r_err = read(STDIN_FILENO, msg, letters);
    if (o_err < 0 || r_err < 0)
    {
        return (0);
    }
    w_err = write(STDOUT_FILENO, msg, letters);
    if (w_err < 0)
    {
        return (0);
    }
    len = strlen(msg);
    return (len);
}
