#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t write_count;
    size_t len = 0;

    /* check if filename is NULL */
    if (!filename)
        return (-1);

    /* open the file */
    fd = open(filename, O_WRONLY | O_APPEND);
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
