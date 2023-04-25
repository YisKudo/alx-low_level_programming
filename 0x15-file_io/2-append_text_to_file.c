#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t written_bytes;
    size_t len;

    if (!filename)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content)
    {
        len = strlen(text_content);
        written_bytes = write(fd, text_content, len);
        if (written_bytes == -1 || (size_t)written_bytes != len)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}

