#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to standard output
 * @filename: the name of file to read and print
 * @letters: the number of letter in filename
 * Return: the actual number of letters it could read and print OR 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd = 0;
    char *tmp;
    ssize_t error, len = 0;

    if (filename == NULL)
    {
        return (0);
    }
    tmp = malloc(sizeof(char) * letters);
    if (tmp == NULL)
    {
        return (0);
    }
    fd = open (filename, O_RDONLY);
    if (fd == -1)
    {
        free(tmp);
        return(0);
    }
    len = read(fd, tmp, letters);
    if (len == -1)
    {
        free(tmp);
        return (0);
    }
    if (len > 0)
    {
        error = write (STDOUT_FILENO, tmp, len);
    }
    if (error < len)
    {
        free(tmp);
        return (0);
    }
    error = close(fd);
    if (error == -1)
    {
        free(tmp);
        return (0);
    }

    free(tmp);
    return (len);
}
