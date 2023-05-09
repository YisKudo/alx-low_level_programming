#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buffer;

	/* check if filename is NULL */
	if (!filename)
		return (0);

	/* open the file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* allocate memory for buffer */
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	/* read the file */
	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write to standard output */
	write_count = write(STDOUT_FILENO, buffer, read_count);

	/* clean up and return */
	free(buffer);
	close(fd);

	if (write_count != read_count)
		return (0);

	return (write_count);
}
