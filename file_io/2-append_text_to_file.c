#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename:
 * @text_content:
 * Return: 1 OR -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, len, count;

    if (filename == NULL)
    {
        return (-1);
    }
    fd = open(filename, O_APPEND | O_WRONLY);
    if (fd == -1)
    {
        return (-1);
    }
    if (text_content != NULL)
    {
        for (len =0; text_content[len] != '\0'; len++)
                ;
        count = write(fd, text_content, len);
        if (count)
        {
            return(-1);
        }
    }
    close(fd);
    return (1);
}
