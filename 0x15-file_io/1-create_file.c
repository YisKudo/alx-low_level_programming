#include "main.h"

/**
 * create_file - Creates a file and writes the text_content into it.
 * @filename: Name of the file to be created.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t len = 0;

	/* check if filename is NULL */
	if (!filename)
		return (-1);

	/* create a file with rw------- permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if text_content is not NULL, write it to the file */
	if (text_content)
	{
		while (text_content[len])
			len++;

		write_count = write(fd, text_content, len);
		if (write_count == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
