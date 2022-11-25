#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: file will be create
 * @text_content: content of the file
 * Return: 1 OR -1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len, count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		count = write(fd, text_content, len);
	}
	if (count == -1)
	{
		return (-1);
	}
	close(fd);
	return (-1);
}
